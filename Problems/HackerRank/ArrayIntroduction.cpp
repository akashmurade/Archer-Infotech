// https://www.hackerrank.com/challenges/arrays-introduction/problem
#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int nums[n];
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    } 
    for(int i = n - 1; i >= 0; i--) {
        cout << nums[i] << " ";
    }
    return 0;
}
