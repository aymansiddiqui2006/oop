#include <iostream>
using namespace std;

class employee
{
    string name;
    int age;

public:
    void setdata();
    void getdata();
};
void employee::setdata()
{
    cout << "enter name" << endl;
    cin >> name;
    cout << "enter age" << endl;
    cin >> age;
}

void employee::getdata()
{
    cout << "the name is : " << name << endl;
    cout << "the name is : " << age << endl;
}

int main()
{
    employee e[3];

    for (int i = 0; i < 3; i++)
    {
        e[i].setdata();
    }

    for (int i = 0; i < 3; i++)
    {
        e[i].getdata();
    }

    return 0;
}
