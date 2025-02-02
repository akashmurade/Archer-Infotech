// https://www.codechef.com/practice/course/strings/STRINGS/problems/TITLECASE
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        int len = s.length();
        int sp = 0;
        bool fl = false;

        for (int i = 0; i < len + 1; i++) {
            if ((s[i] == ' ') || s[i] == '\0') {
                if (fl) {
                    if (s[sp] >= 'a' && s[sp] <= 'z') {
                        s[sp] -= 32;
                    }
                    for (int j = sp + 1; s[j] != ' ' && s[j] != '\0'; j++) {
                        if (s[j] >= 'A' && s[j] <= 'Z') {
                            s[j] += 32;
                        }
                    }
                }
                sp = i + 1;
                fl = false;
            }
            else if (s[i] >= 'a' && s[i] <= 'z') {
                fl = true;
            }
        }

        cout << s << endl;
    }

    return 0;
}