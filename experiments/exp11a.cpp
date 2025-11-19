#include<iostream>
using namespace std;

template<typename T>
T Max(T a, T b){
    return (a>b)?a:b;
}

int main (){
    cout<<"the the max of 5 and 8 is"<<Max<int>(5,8)<<endl;
    cout<<"the the max of 4.68 and 9.54 is "<<Max<float>(4.68,9.54)<<endl;
    cout<<"the the max of d and a is "<<Max<char>('d','a')<<endl;
  return 0;
}