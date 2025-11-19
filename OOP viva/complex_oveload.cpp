#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;

public:
    complex(int r, int i)
    {
        real = r;
        img = i;
    }
    complex operator+(complex c2)
    {
        complex c3(0, 0);
        c3.real = real + c2.real;
        c3.img = img + c2.img;
        return c3;
    }
    void display()
    {
        cout << real << " + " << img<<"i" << endl;
    }
};

int main()
{
    complex c1(3, 4), c2(8, 9);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}