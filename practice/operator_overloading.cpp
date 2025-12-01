#include<iostream>
using namespace std;

class add{
    int n;
    public:
    add(int num){
        n=num;
    }
    add operator++(){
        ++n; //postfix not allowed
        return n;
    }
    void display(){
        cout<<n<<endl;
    }
};
int main (){
    add n1(3);
    n1.display();
    ++n1;
    n1.display();

  return 0;
}