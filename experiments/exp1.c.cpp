#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"***** WELCOME .. HOPE THIS CALCULATOR WILL HELP *****"<<endl;

    int a,b,ch;

    cout << "Enter two numbers: ";
    cin>>a>>b;

    while(1){
      cout<<"\n******operation menu******"<<endl;

    cout<<"1:Add\n2:Sub\n3:Mul\n4:Div\n5:power\n6.exit "<<endl;
    cout << "Enter your choice: ";
    cin>>ch;
    
    switch (ch){
        case 1:{
          int add=a+b;
          cout<<"the sum is "<<add;
          break;}

        case 2:{
          int sub=a-b;
          cout<<"the sub is " <<sub;
          break;}
          
        case 3:{
          int mul=a*b;
          cout<<"the mul is "<<mul;
          break;}
        
        case 4:{
          int div=a/b;
          cout<<"the div is "<<div;
          break;}

        case 5:{
          int power=pow(a,b);
          cout<<"the power is  "<<power;
          break;

        }
        case 6 :{
          cout<<"exiting......";
          return 0;
        }
         
        default:
        cout<<"entered wrong input";

    }
  }
  return 0;

  
    
}