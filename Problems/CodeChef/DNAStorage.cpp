// https://www.codechef.com/practice/course/strings/STRINGS/problems/DNASTORAGE
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        // your code goes here
        for(int i = 0; i < n; i += 2) {
            if(s[i] == '0') {
                if(s[i + 1] == '0') {
                    cout << 'A';
                }
                else {
                    cout << 'T';
                }
            }
            else {
                if(s[i + 1] == '0') {
                    cout << 'C';
                }
                else {
                    cout << 'G';
                }
            }
        }
        cout << endl;
    }

}
