#include <bits/stdc++.h>
using namespace std;

class complex
{
    int real, image;

public:
    complex(int r, int i)
    {
        r = real;
        i=image;
    }
    complex operator+(complex c2)
    {
        complex c3(0,0);
        c3.real = this->real + c2.real;
        c3.image = this->image + c2.image;
        return c3;
    }
    void print()
    {
        cout << real << "+" << image << "i" << endl;
    }
};

int main()
{
    complex c1(2, 3);
    complex c2(3, 2);
    complex c3 = c1 + c2;
    c3.print();
    return 0;
}