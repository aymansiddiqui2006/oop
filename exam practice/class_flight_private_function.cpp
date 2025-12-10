#include<iostream>
using namespace std;

class flight{
    int flight_num;
    string des;
    float dis;
    float  feul;
    int cal(int d){
        dis=d;
        if(dis<=1000){
            return 500;
        }
        if(dis>1000 && dis<=2000){
            return 1100;
        }
        if(dis>2000){
            return 2200;
        }
    }

    public:
    void feedinfo(int f,string de,float di){
        flight_num=f;
        des=de;
        dis=di;
        feul=cal(dis);

    }

    void display(){
        cout<<"\n\n\n flight number is :"<<flight_num;
        cout<<"\n destination number is :"<<des;
        cout<<"\n distance number is :"<<dis;
        cout<<"\n the feul is : "<<feul;
    }

};
int main (){

    flight f1;
    f1.feedinfo(2345,"mumbai",250);
    f1.display();

    f1.feedinfo(2345,"delhi",25000);
    f1.display();


    f1.feedinfo(2345,"bihar",1150);
    f1.display();
  return 0;
}