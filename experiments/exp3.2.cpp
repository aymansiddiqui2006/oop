#include<iostream>
using namespace std;

int  add(int a=0,int b=0,int c=0,int d=0){
    int sum=a+b+c+d;
    cout<<"the addition of numbers is = "<<sum<<endl;
}

int main(){
    add();
    add(2,3);
    add(2,9,4);
    add(5,10,2,3);

    return 0;
    
}