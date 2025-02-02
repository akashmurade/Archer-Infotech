// https://www.hackerrank.com/challenges/prettyprint/problem
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

        cout << left << nouppercase << showbase << hex << (long)A << endl;
        
        cout << right << setw(0xf) << setfill('_') << showpos << setprecision(2) << fixed << B << endl;
        
        cout << uppercase << noshowpos << scientific << setprecision(9) << C << endl;

	}
	return 0;

}