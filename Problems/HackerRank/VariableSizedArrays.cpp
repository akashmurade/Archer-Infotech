// https://www.hackerrank.com/challenges/variable-sized-arrays/problem
#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, t;
    cin >> n >> t;
    
    int **a = new int*[n];
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a[i] = new int[k];
        for(int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }
    while(t--) {
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    return 0;
} 
