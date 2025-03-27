// https://www.hackerrank.com/challenges/c-class-templates/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
template <class T>
class AddElements {
    T n;
    public:
    AddElements(T a) {
        n = a;
    }
    // addition of int or float
    T add(T a) {
        n += a;
        return n;
    }
};

template<>
class AddElements<string> {
    string str;
    public:
    AddElements<string>(string str) {
        this -> str = str;
    }
    
    string concatenate(string a) {
        str = str + a;
        return str;
    }
};

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
