#include<bits/stdc++.h>
using namespace std;

template<typename t>
void Swap(t &a , t &b){
    swap(a,b);
    cout<<"the a is :"<<a<<" the b is : "<<b<<endl;
}

int main (){
    int x = 5, y = 8;
    float f1 = 4.68, f2 = 9.54;
    char c1 = 'd', c2 = 'a';

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    Swap(x, y);

    cout << "\nBefore swap: f1 = " << f1 << ", f2 = " << f2 << endl;
    Swap(f1, f2);

    cout << "\nBefore swap: c1 = " << c1 << ", c2 = " << c2 << endl;
    Swap(c1, c2);
  return 0;
}