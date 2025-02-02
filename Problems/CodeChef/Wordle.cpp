// https://www.codechef.com/practice/course/strings/STRINGS/problems
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        string S, G, M = "";
        cin >> S >> G;
        for(int j = 0; j < 5; j++) {
            if(S[j] == G[j]) {
                M += 'G';
            }
            else {
                M += 'B';
            }
        }
        cout << M << endl;
    }
}
