#include<iostream>
using namespace std;

class emplyee{
    string name;
    float salory;
    public:
    void getdata(){
        cout<<"eneter name and salory"<<endl;
        cin>>name>>salory;
    }
    void display(){
        cout<<name<<salory<<endl;
    }
};
int main (){
    emplyee e[3];
    for(int i=0;i<3;i++){
        e[i].getdata();
    }
    for(int i=0;i<3;i++){
        e[i].display();
    }
  return 0;
}