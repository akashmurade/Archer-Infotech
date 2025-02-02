// https://www.hackerrank.com/challenges/deque-stl/problem
#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k){
	deque<int> dq;
    int i, max = 0;
    for(i = 0; i < k; i++) {
        dq.push_back(arr[i]);
        max = arr[i] > max ? arr[i] : max;
    }
    cout << max << " ";
    for(; i < n; i++) {
        int temp = *dq.begin();
        dq.pop_front();
        dq.push_back(arr[i]);
        if(temp == max) {
            max = *max_element(dq.begin(), dq.end());
        }
        else {
            max = arr[i] > max ? arr[i] : max;
        }
        cout << max << " ";
    }
    cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
    