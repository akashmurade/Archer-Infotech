#include <stdio.h>
/**
// One Dimensional Array programs
// - Write a program to print the marks obtained by a student in five tests.
int main()
{
    int marks[5];

    printf("Enter marks obtained in 5 tests:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    printf("Marks obtained in 5 tests are: ");
    for(int i = 0; i < 5; i++) {
        printf("\t%d", marks[i]);
    }
    return 0;
}

// - Write a program to print the average marks obtained by a student in five tests.
int main()
{
    int noOfSub = 5, marks[noOfSub], tot = 0;

    printf("Enter marks obtained in %d tests:\n", noOfSub);
    for(int i = 0; i < noOfSub; i++) {
        scanf("%d", &marks[i]);
        tot = tot + marks[i];
    }

    printf("Average: %.2f", tot / (float)noOfSub);
    return 0;
}

// - Write a program to find the sum of negative and positive integers.
int main()
{
    int noi = 5, no[noi], ps = 0, ns = 0;

    printf("Enter %d numbers:\n", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
        if(no[i] > 0) {
            ps = ps + no[i];
        }
        else {
            ns = ns + no[i];
        }
    }

    printf("Positive Sum: %d\nNegative Sum: %d", ps, ns);
    return 0;
}

// - Write a program to find the sum of N numbers in an array
int main()
{
    int noi = 5, no[noi], sum = 0;

    printf("Enter %d numbers:\n", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
        sum = sum + no[i];
    }

    printf("Sum of numbers in the array: %d", sum);
    return 0;
}

// - Write a program to find the smallest element in the array
int main()
{
    int noi = 5, no[noi], min;

    printf("Enter %d numbers:\n", noi);
    if(noi) {
        scanf("%d", &no[0]);
        min = no[0];
    }
    for(int i = 1; i < noi; i++) {
        scanf("%d", &no[i]);
        min = min > no[i] ? no[i] : min;
    }

    printf("Smallest number in the array: %d", min);
    return 0;
}

// - Write a program to find the largest element in the array
int main()
{
    int noi = 5, no[noi], max;

    printf("Enter %d numbers:\n", noi);
    if(noi) {
        scanf("%d", &no[0]);
        max = no[0];
    }
    for(int i = 1; i < noi; i++) {
        scanf("%d", &no[i]);
        max = max < no[i] ? no[i] : max;
    }

    printf("Largest number in the array: %d", max);
    return 0;
}

// - Write a program to find the 2nd smallest element in the array
int main()
{
    int noi = 5, no[noi], fsm, ssm;

    printf("Enter %d numbers:\n", noi);
    // if there exist a second smallest
    if(noi > 1) {
        // taking first two numbers
        for(int i = 0; i < 2; i++) {
            scanf("%d", &no[i]);
        }
        // initializing first and second smallest
        if(no[0] < no[1]) {
            fsm = no[0];
            ssm = no[1];
        }
        else {
            fsm = no[1];
            ssm = no[0];
        }
        // processing other numbers for first and second smallest
        for(int i = 2; i < noi; i++) {
            scanf("%d", &no[i]);
            if(no[i] < fsm) {
                ssm = fsm;
                fsm = no[i];
            }
            else if(no[i] < ssm) {
                ssm = no[i];
            }
        }
        printf("Second smallest number in the array: %d", ssm);
    }
    // if there are 0 or 1 numbers in array
    else {
        printf("There are not enough elements.");
    }
    return 0;
}

// - Write a program to find the 2nd largest element in the array
int main()
{
    int noi = 5, no[noi], fl, sl;

    printf("Enter %d numbers:\n", noi);
    // if there exist a second largest
    if(noi > 1) {
        // taking first two numbers
        for(int i = 0; i < 2; i++) {
            scanf("%d", &no[i]);
        }
        // initializing first and second largest
        if(no[0] > no[1]) {
            fl = no[0];
            sl = no[1];
        }
        else {
            fl = no[1];
            sl = no[0];
        }
        // processing other numbers for first and second largest
        for(int i = 2; i < noi; i++) {
            scanf("%d", &no[i]);
            if(no[i] > fl) {
                sl = fl;
                fl = no[i];
            }
            else if(no[i] > sl) {
                sl = no[i];
            }
        }
        printf("Second largest number in the array: %d", sl);
    }
    // if there are 0 or 1 numbers in array
    else {
        printf("There are not enough elements.");
    }
    return 0;
}

// - Write a program to Print the Average of Numbers in array at an even position
int main()
{
    int noi = 5, no[noi], totEvenPos = 0;

    printf("Enter %d numbers:\n", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
        if(i%2) {
            totEvenPos = totEvenPos + no[i];
        }
    }

    printf("Average of Numbers at even positions: %.2f", totEvenPos / (float)(noi / 2));
    return 0;
}

// - Write a program to Print the Average of Numbers in array at an odd position
int main()
{
    int noi = 5, no[noi], totOddPos = 0;

    printf("Enter %d numbers:\n", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
        if(i%2 == 0) {
            totOddPos = totOddPos + no[i];
        }
    }

    printf("Average of Numbers at odd positions: %.2f", totOddPos / (float)((noi + 1) / 2));
    return 0;
}

// - Write a program to print array elements in reverse order.
int main()
{
    int noi = 5, no[noi];

    printf("Enter %d numbers:\n", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
    }

    printf("Array Elements in Reverse Order: ");
    for(int i = noi - 1; i >= 0; i--) {
        printf("\t%d", no[i]);
    }
    return 0;
}

// - Write a program to display a list of even and odd numbers separately from an array.
int main()
{
    int noi = 5, no[noi];

    printf("Enter %d numbers:\n", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
    }

    printf("\nEven Numbers: ");
    for(int i = 0; i < noi; i++) {
        if(no[i] % 2 == 0) {
            printf("\t%d", no[i]);
        }
    }
    printf("\nOdd Numbers");
    for(int i = 0; i < noi; i++) {
        if(no[i] % 2 != 0) {
            printf("\t%d", no[i]);
        }
    }
    return 0;
}

// - Write a program to print the frequency of all numbers in an array.
int main()
{
    int noi= 5, no[noi], tmp[noi];

    printf("Enter %d numbers: ", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
        tmp[i] = no[i];
    }

    for(int i = 0; i < noi; i++) {
        if(tmp[i] != -1) {
            int cnt = 1;
            for(int j = i+1; j < noi; j++) {
                if(tmp[j] == tmp[i]) {
                    tmp[j] = -1;
                    cnt ++;
                }
            }
            printf("\n%d occurs %d times", tmp[i], cnt);
        }
    }
    return 0;
}

// - Write a program to print the most occurring elements.
int main()
{
    int noi= 5, no[noi], tmp[noi], maxFreq = 0, maxFreqEle = 0;

    printf("Enter %d numbers: ", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
        tmp[i] = no[i];
    }

    for(int i = 0; i < noi; i++) {
        if(tmp[i] != -1) {
            int cnt = 1;
            for(int j = i+1; j < noi; j++) {
                if(tmp[j] == tmp[i]) {
                    tmp[j] = -1;
                    cnt ++;
                }
            }
            if(maxFreq < cnt) {
                maxFreq = cnt;
                maxFreqEle = tmp[i];
            }
        }
    }

    printf("Max Frequency is of %d which is %d times.", maxFreqEle, maxFreq);
    return 0;
}

// - Write a Program to Find missing numbers in an array.
int main()
{
    int noi = 5, no[noi], min , max;

    printf("Enter %d numbers:\n", noi);
    if(noi) {
        scanf("%d", &min);
        max = min;
        for(int i = 1; i < noi; i++) {
            scanf("%d", &no[i]);
            max = max < no[i] ? no[i] : max;
            min = min > no[i] ? no[i] : min;
        }

        printf("\nMissing Numbers are:\n");
        for(int i = min + 1; i < max; i++) {
            int present = 0;
            for(int j = 0; j < noi; j++) {
                if(i == no[j]) {
                    present = 1;
                    break;
                }
            }
            if(!present) {
                printf("\t%d", i);
            }
        }
    }
    return 0;
}

// - Write a program to separate even and odd position numbers in an array.
int main()
{
    int noi = 5, no[noi];

    printf("Enter %d numbers: ", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
    }

    printf("\nEven positioned elements are: \n");
    for(int i = 1; i < noi; i += 2) {
        printf("\t%d", no[i]);
    }

    printf("\nOdd positioned elements are: \n");
    for(int i = 0; i < noi; i += 2) {
        printf("\t%d", no[i]);
    }

    return 0;
}

// - Write a program to separate positive and negative numbers in an array.
int main()
{
    int noi = 5, no[noi];

    printf("Enter %d numbers: ", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
    }

    printf("\nPositive numbers are: \n");
    for(int i = 0; i < noi; i ++) {
        if(no[i] > 0) {
            printf("\t%d", no[i]);
        }
    }

    printf("\nNegative numbers are: \n");
    for(int i = 0; i < noi; i ++) {
        if(no[i] < 0) {
            printf("\t%d", no[i]);
        }
    }

    return 0;
}

// - Write a program to print the least number of occurring elements in an array.
int main()
{
    int noi= 5, no[noi], tmp[noi], minFreq = noi, minFreqEle = 0;

    printf("Enter %d numbers: ", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
        tmp[i] = no[i];
    }

    for(int i = 0; i < noi; i++) {
        if(tmp[i] != -1) {
            int cnt = 1;
            for(int j = i+1; j < noi; j++) {
                if(tmp[j] == tmp[i]) {
                    tmp[j] = -1;
                    cnt ++;
                }
            }
            if(minFreq > cnt) {
                minFreq = cnt;
                minFreqEle = tmp[i];
            }
        }
    }

    printf("Min Frequency is of %d which is %d times.", minFreqEle, minFreq);
    return 0;
}

// - Write a program to insert an element into an array at a specified position
int main()
{
    int noi= 5, no[noi + 1], num, ind;

    printf("Enter %d numbers: ", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
    }

    printf("Enter index (starting from 0) & number to insert: ");
    scanf("%d %d", &ind, &num);

    if(ind > noi) {
        printf("\nIndex out of bounds.");
    }
    else {
        for(int i = noi; i > ind; i--) {
            no[i] = no[i - 1];
        }
        no[ind] = num;
        printf("Array becomes\n");
        for(int i = 0; i < noi + 1; i++) {
            printf("\t%d", no[i]);
        }
    }

    return 0;
}

// - Write a program to delete a specified integer in an array
int main()
{
    int noi= 5, no[noi], num, ind = -1;

    printf("Enter %d numbers: ", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
    }

    printf("Enter number to delete: ");
    scanf("%d", &num);

    for(int i = 0; i < noi; i++) {
        if(num == no[i]) {
            ind = i;
            break;
        }
    }
    if(ind != -1) {
        for(int i = ind; i < noi - 1; i++) {
            no[i] = no[i + 1];
        }
        printf("Array becomes\n");
        for(int i = 0; i < noi - 1; i++) {
            printf("\t%d", no[i]);
        }
    }
    else {
        printf("Element not found.");
    }
    return 0;
}

// - Write a program to print all negative elements in an array
int main()
{
    int noi= 5, no[noi];

    printf("Enter %d numbers: ", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
    }

    printf("\nNegative Numbers are \n");
    for(int i = 0; i < noi; i++) {
        if(no[i] < 0) {
            printf("\t%d", no[i]);
        }
    }
    return 0;
}

// - Write a Program To find largest and smallest number and their positions
int main()
{
    int noi= 5, no[noi], l, s;

    printf("Enter %d numbers: ", noi);
    if(noi) {
        scanf("%d", &no[0]);
        l = no[0];
        s = no[0];
    }
    for(int i = 1; i < noi; i++) {
        scanf("%d", &no[i]);
        l = no[i] > l ? no[i] : l;
        s = no[i] < s ? no[i] : s;
    }

    printf("\nLargest: %d\nSmallest: %d", l, s);
    return 0;
}

// - Write a program to input and print n elements in an array
int main()
{
    int noi= 5, no[noi];

    printf("Enter %d numbers: ", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
    }

    printf("Numbers in array are: \n");
    for(int i = 0; i < noi; i++) {
        printf("\t%d", no[i]);
    }
    return 0;
}

// - Write a program to count total number of negative elements in array
int main()
{
    int noi= 5, no[noi], ncnt = 0;

    printf("Enter %d numbers: ", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
    }

    for(int i = 0; i < noi; i++) {
        if(no[i] < 0) {
            ncnt++;
        }
    }
    printf("\nNegative count: %d", ncnt);
    return 0;
}

// - Write a program to print all unique element in an array
int main()
{
    int noi= 5, no[noi], tmp[noi];

    printf("Enter %d numbers: ", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
        tmp[i] = no[i];
    }

    printf("\nUnique elements\n");
    for(int i = 0; i < noi; i++) {
        if(tmp[i] != -1) {
            for(int j = i+1; j < noi; j++) {
                if(tmp[j] == tmp[i]) {
                    tmp[j] = -1;
                }
            }
            printf("\t%d", tmp[i]);
        }
    }
    return 0;
}

// - Write a program to replace all Even elements by 0 and Odd by 1
int main()
{
    int noi= 5, no[noi];

    printf("Enter %d numbers: ", noi);
    for(int i = 0; i < noi; i++) {
        scanf("%d", &no[i]);
        if(no[i] % 2 == 0) {
            no[i] = 0;
        }
        else {
            no[i] = 1;
        }
    }

    printf("0 for even and 1 for odd\n The array is \n");
    for(int i = 0; i < noi; i++) {
        printf("\t%d", no[i]);
    }
    return 0;
}

// - Write a Program to Find Union & Intersection of 2 Arrays
*/
int main()
{
    int noi = 5, n1[noi], tn[noi * 2], tn2[noi * 2], n2[noi];

    printf("Enter first array: \n");
    for(int i = 0; i < noi; i++) {
        scanf("%d", &n1[i]);
        tn[i] = n1[i];
        tn2[i] = n1[i];
    }

    printf("Enter second array: \n");
    for(int i = 0; i < noi; i++) {
        scanf("%d", &n2[i]);
        tn[i + noi] = n2[i];
        tn2[i + noi] = n2[i];
    }

    printf("\nUnion:\n");
    for(int i = 0; i < noi * 2; i++) {
        if(tn[i] != -1) {
            for(int j = i+1; j < noi * 2; j++) {
                if(tn[j] == tn[i]) {
                    tn[j] = -1;
                }
            }
            printf("\t%d", tn[i]);
        }
    }

    // removes duplicate from first array
    for(int i = 0; i < noi; i++) {
        if(tn2[i] != -1) {
            for(int j = i + 1; j < noi; j++) {
                if(tn2[i] == tn2[j]) {
                    tn2[j] = -1;
                }
            }
        }
    }
    printf("\nIntersection:\n");
    for(int i = 0; i < noi; i++) {
        if(tn2[i] != -1) {
            for(int j = noi; j < 2 * noi; j++) {
                if(tn2[i] == tn2[j]) {
                    printf("\t%d", tn2[i]);
                    break;
                }
            }
        }

    }
    return 0;
}


























