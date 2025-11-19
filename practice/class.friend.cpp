#include <iostream>
using namespace std;

class average
{
    int a;
    int b;

public:
    void putsum()
    {
        cin >> a >> b;
    }
    void getsum()
    {
        cout << "sum is : " << a + b << endl;
    }
    friend float avg(average a);
};

float avg(average a)
{
    cout <<"avg is : "<< (a.a + a.b) / 2<<endl;
}

int main()
{
    average b;
    b.putsum();
    b.getsum();
    avg(b);
    
}