// https://www.hackerrank.com/challenges/cpp-maps/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    
    map<string, int> mp;
    
    while(q--) {
        int n;
        cin >> n;
        
        string name;
        cin >> name;
        if(n == 1) {
            int m;
            cin >> m;
            mp[name] += m;
        }
        else if(n == 2) {
            mp.erase(name);
        }
        else {
            cout << mp[name] << endl;
        }       
    }
    
    return 0;
}