#include<iostream>
using namespace std;

//inline function
inline int Max(int a,int b){
   return (a>b)?a:b;
}

int main(){
    cout<<"the Max of 10 and 5 : "<<Max(10,5)<<"\n";
    cout<<"the Max of 70 and 60 : "<<Max(70,60)<<"\n";
    cout<<"the Max of 10 and 80 : "<<Max(10,80)<<"\n";
    cout<<"the Max of 0 and 20 : "<<Max(0,20)<<"\n";

    return 0;
}