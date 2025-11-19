#include<iostream>
using namespace std ;

void add(int a , int b , int c){
    int sum=a+b+c;
    cout<<"the addition of integer is :-  "<<sum;
}

void add(float d, float e){
    float sum=d+e;
    cout<<"the addition of float is :- "<<sum;
}

int main(){
    int a,b,c;
    float d,e;

    cout<<"enter 3 inputs for integer addition : "<<endl;
    cin>>a>>b>>c;

    cout<<"enter 2 input for float addition : "<<endl;
    cin>>d>>e;

    add(a,b,c);

    cout<<"\n";

    add(d,e);

    return 0;
}