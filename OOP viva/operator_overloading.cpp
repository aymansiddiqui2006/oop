#include <iostream>
using namespace std;

class sum
{
    int a;

public:
    sum(int x=0)
    {
        a=x;
    }
    sum operator ++(){
        ++a;
        return a;
    }
    void display(){
        cout<<a;
    }

};

int main(){
    sum a(23);
    ++a;
    a.display();
    
    return 0;

}