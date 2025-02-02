// https://www.codechef.com/practice/course/strings/STRINGS/problems
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int cnt = 0, n;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < n - 1; i++) {
            if(s[i] == s[i + 1]) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
