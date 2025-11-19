#include<iostream>
using namespace std;

int pattern(string ch="*",int count=3){
    for(int i=0;i<count;i++){
        cout<<ch<<" ";
    }
    cout<<endl;
}

int main(){
    pattern();
    pattern("&");
    pattern("#",5);
    pattern("hello",4);
}