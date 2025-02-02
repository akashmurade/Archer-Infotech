// https://www.hackerrank.com/challenges/cpp-lower-bound/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> n;
        int ind = distance(v.begin(), lower_bound(v.begin(), v.end(), n));
        cout << (v[ind] == n ? "Yes " : "No ") << ind + 1 << endl;
    }
      
    return 0;
}
