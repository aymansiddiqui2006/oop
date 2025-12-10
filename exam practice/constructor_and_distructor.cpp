#include<iostream>
using namespace std;
class area{
    int base;
    int height;
    public:
    area(int b,int h){
        cout<<"con called"<<endl;
        base=b;
        height=h;
        int result=0.5*height*base;
        cout<<result;
    }
    ~area(){
        cout<<"\ndis called"<<endl;
    }
};
int main (){
    area a1(2,4);
    
    area a2(8,4);
  return 0;
}