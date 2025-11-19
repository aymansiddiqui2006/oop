#include<bits/stdc++.h>
using namespace std;
#define pi 3.14

int  area(int s){
    int sqaure = s*s;
    return sqaure;
}

int area(int l , int b){
    int rec = l*b;
    return rec;
}

float area(float r){
    float circle = pi * r * r;
    return circle;
    
}

int main(){
    int s,l,b;
    float r;

    cout<<"enter the side of sqaure : "<<endl;
    cin>>s;

    cout<<"enter the length and breadth of rectangle : "<<endl;
    cin>>l>>b;

    cout<<"enter the radius of circle : "<<endl;
    cin>>r;

    cout<<endl;

    cout<<"the area of sqaure is : "<<area(s)<<endl;
    cout<<"the area of rectangle is : "<<area(l,b)<<endl;
    cout<<"the area of circle is : "<<area(r)<<endl;

}

