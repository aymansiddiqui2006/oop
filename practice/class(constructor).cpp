#include <iostream>
using namespace std;
// as we are using the constructor in different way so it constructor overloading
class student
{
private:
    char name;
    int roll;

public:
    student() // default constructor
    {
        cin >> name >> roll;
        cout << "name is : " << name;
        cout << "roll no : " << roll;
    }
    student(char n, int r);
    student(student &s1);
};
// paramitarize constructor
student ::student(char n, int r)
{
    name = n;
    roll = r;
    cout << "name is : " << name;
    cout << "roll no : " << roll;
}
// copy constructor
student::student(student &s1)
{

    cout << "name is : " << s1.name;
    
    cout << "roll no : " << s1.roll;
}

int main()
{
    student s;
    return 0;
}