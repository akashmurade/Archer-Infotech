#include<stdio.h>
/*
// Palindrome
int main()
{
    char str[50];
    int len = 0, isPalindrome = 1;

    printf("Enter String: ");
    gets(str);

    // length of string
    while(str[len] != '\0') {
        len++;
    }

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len-i-1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) {
        printf("%s is Palindrome.", str);
    }
    else {
        printf("%s is Not Palindrome.", str);
    }
    return 0;
}

//WAP to sort the string in alpha. order
int main()
{
    char str[100], ch;
    int j;

    printf("Enter String: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        for(ch = str[i] , j = i - 1; j >= 0 && (str[j] >= 'A' && str[j] <= 'Z' ? str[j] + 32 : str[j]) > (ch >= 'A' && ch <= 'Z' ? ch + 32 : ch); j--) {
            str[j + 1] = str[j];
        }
        str[j + 1] = ch;
    }

    printf("Modified String: %s", str);
    return 0;
}

// WAP to remove repeated character from string
int main()
{
    char str[100];
    int i, k;

    printf("Enter String: ");
    gets(str);

    for(i = 0, k = 0; str[i] != '\0'; i++) {
        int rep = 0;
        for(int j = k - 1; j >= 0; j--) {
            if(str[i] == str[j]) {
                rep = 1;
                break;
            }
        }
        if(!rep) {
            str[k++] = str[i];
        }
    }
    str[k] = '\0';

    printf("Modified String: %s", str);
    return 0;
}

// Enter alphanumeric string and replace every digit with equivalent string.
int main()
{
    char str[100], nums[10][6] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int strLen;
    printf("Enter String: ");
    gets(str);

    for(strLen = 0;str[strLen] != '\0'; strLen++);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            int numLen = 0;
            char ch = str[i];
            for(; nums[str[i] - '0'][numLen] != 0; numLen ++);
            for(int k = strLen; k > i; k--) {
                str[k + numLen - 1] = str[k];
            }
            for(int j = 0; j < numLen; j++) {
                str[i+j] = nums[ch - '0'][j];
            }
            i = numLen - 1;
            strLen += numLen;
        }
    }

    printf("Modified String: %s", str);
    return 0;
}

// split string in to 2 diferent strings in such way that one string having all words with
// even character count and another with odd.
int main()
{
    char str[100], even[100], odd[100];
    int e = 0, ef = 0, o = 0, of = 0, cnt = 0;

    printf("Enter String: ");
    gets(str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(cnt && str[i] == ' ') {
            if(cnt % 2 == 0) {
                o = of;
                even[e++] = ' ';
                ef = e;
            }
            else {
                e = ef;
                odd[o++] = ' ';
                of = o;
            }
            cnt = 0;
        }
        else if(str[i] != ' ') {
            even[e++] = str[i];
            odd[o++] = str[i];
            cnt++;
        }
    }
    if(cnt) {
        if(cnt % 2 == 0) {
            ef = e;
        }
        else {
            of = o;
        }
    }
    even[ef] = '\0';
    odd[of] = '\0';

    printf("Even String: %s\nOdd String: %s", even, odd);
    return 0;
}

// merge two string as per the word length
*/
int main()
{
    char s1[100], s2[100], m[200];
    int fp = 0, cnt = 0, freq[3][10];

    printf("Enter String 1: ");
    gets(s1);

    printf("Enter String 2: ");
    gets(s2);
    int len;
    for(len = 0; s1[len] != 0; len++);
    s1[len] = ' ';
    s1[len + 1] = '\0';
    for(len = 0; s2[len] != 0; len++);
    s2[len] = ' ';
    s2[len + 1] = '\0';
    for(int i = 0; s1[i] != '\0'; i++) {
        if(cnt && s1[i] == ' ') {
            int j;
            for(j = fp - 1; j >= 0 && freq[2][j] > cnt; j--) {
                freq[0][j + 1] = freq[0][j];
                freq[1][j + 1] = freq[1][j];
                freq[2][j + 1] = freq[2][j];
            }
            freq[0][j + 1] = 0;
            freq[1][j + 1] = i - cnt;
            freq[2][j + 1] = cnt;
            cnt = 0;
            fp++;
        }
        else if(s1[i] != ' ') {
            cnt++;
        }
    }

    for(int i = 0; s2[i] != '\0'; i++) {
        if(cnt && s2[i] == ' ') {
            int j;
            for(j = fp - 1; j >= 0 && freq[2][j] > cnt; j--) {
                freq[0][j + 1] = freq[0][j];
                freq[1][j + 1] = freq[1][j];
                freq[2][j + 1] = freq[2][j];
            }
            freq[0][j + 1] = 1;
            freq[1][j + 1] = i - cnt;
            freq[2][j + 1] = cnt;
            cnt = 0;
            fp++;
        }
        else if(s2[i] != ' ') {
            cnt++;
        }
    }

    // for(int i = 0; i < fp; i++) {
    //     printf("\n%d\t%d\t%d", freq[0][i], freq[1][i], freq[2][i]);
    // }
    int mp = 0;
    for(int i = 0; i < fp; i++) {
        for(int j = freq[1][i]; j < freq[1][i] + freq[2][i]; j++) {
            if(freq[0][i]) {
                m[mp++] = s2[j];
            }
            else {
                m[mp++] = s1[j];
            }
        }
        m[mp++] = ' ';
    }
    m[mp] = '\0';

    printf("\nMerged String: %s", m);
    return 0;
}

















