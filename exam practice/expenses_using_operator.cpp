#include <iostream>
using namespace std;

class expense
{
    int rupee;
    int paise;

public:
    expense(int r, int p)
    {
        rupee = r;
        paise = p;
    }
    void display()
    {
        cout << "rupee is : " << rupee << " paise is : " << paise;
    }
    expense operator+(expense e1)
    {
        expense e3(0, 0);
        e3.rupee = rupee + e1.rupee;
        e3.paise = paise + e1.paise;
        return e3;
    }
};
int main()
{
    expense c1(30, 6);
    expense c2(70, 4);
    expense c3(30, 9);
    expense c4 = c1 + c2 + c3;
    c4.display();
    return 0;
}