#include<iostream>
using namespace std;

class complex{
float real;
float image;
public:
void putdata(float r,float i){
    real=r;image=i;
}
void display(){
    cout<<real<<"+"<<image<<"i"<<endl;
}
friend complex add(complex c1, complex c2);
};

complex add(complex c1, complex c2){
     complex c3;
     c3.real=c1.real+c2.real;
     c3.image=c1.image+c2.image;
     return c3;
}
int main (){
    complex c1,c2,result;
    c1.putdata(2,3);c2.putdata(3,2);
    result=add(c1,c2);
    result.display();

  return 0;
}

