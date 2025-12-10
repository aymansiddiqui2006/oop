#include<iostream>
using namespace std;
template<typename t>
void Max(t a,t b){
    cout<<max(a,b)<<endl;
}
int main (){
int a=9,b=90;
    Max(a,b);
    Max<float>(0.0,9.4);
    Max<double>(90.9,489);
  return 0;
}