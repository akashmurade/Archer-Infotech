// https://www.hackerrank.com/challenges/cpp-sets/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q, n, x;
    cin >> q;
    set<int> s;
    while(q--) {
        cin >> n;
        cin >> x;
        if(n == 1) {
            s.insert(x);
        }
        else if(n == 2){   
            s.erase(x);
        }
        else {
            if(s.find(x) != s.end()) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}