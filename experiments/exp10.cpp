#include <iostream>
using namespace std;

class student
{
protected:
    string name;
    int roll_no;
    string dept;

public:
    student()
    {
        cout << "enter the student name : " << endl;
        cin >> name;
        cout << "enter the student roll no : " << endl;
        cin >> roll_no;
        cout << "enter the student department : " << endl;
        cin >> dept;
    }
};

class general : public student
{
protected:
    string respon;
    float year;

public:
    general() : student()
    {
        cout << "enter the student responsibility : " << endl;
        cin >> respon;
        cout << "enter the student time period (in year) : " << endl;
        cin >> year;

        cout<<"<------student detail------>"<<endl;

        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Department: " << dept << endl;
        cout << "Responsibility: " << respon << endl;
        cout << "Time Period (in years): " << year << endl;
    }
};
int main()
{
    general g;
    return 0;
}