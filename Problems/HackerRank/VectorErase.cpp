// https://www.hackerrank.com/challenges/vector-erase/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x, y;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    cin >> x;
    v.erase(v.begin() + x - 1);
    
    cin >> x >> y;
    v.erase(v.begin() + x - 1, v.begin() + y - 1);
    cout << v.size() << endl;
    for(int i: v) {
        cout << i << " ";
    }
    
    return 0;
}
