#include<iostream>
using namespace std;
class name{
   
    public:
    string name;
    int roll_no;
    void putdata(){
        cout<<"\nenter name :";
        cin>>name;
        cout<<"\nenter roll number :";
        cin>>roll_no;
    }
    void getdata(){
        cout<<"\nname is : "<<name;
        cout<<"\nroll number is : "<<roll_no;
    } 

};

int main (){
    name n[2];
    for(int i=0;i<2;i++){
        n[i].putdata();   
    }
    for(int i=0;i<2;i++){      
        n[i].getdata();
    }
  return 0;
}