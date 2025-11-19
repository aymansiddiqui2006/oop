#include <bits\stdc++.h>
using namespace std;

class student
{
private:      // it is a private class // peivate are default so, we do not need to write private
    int fees; // to access private in the public we have to use the function of get and set value in the public

public:
    string name;
    int roll_no;
    int marks;
    void setfees(int f);
    void getfees();

    /*  void setfees(int f){  //we can set the function inside the public like this
         fees=f;
     }
     void getfees(){
         cout<<"the fees is  : "<<fees<<endl;
     }*/
};
/* to set the function outside the calss we have to use (:: between the class name and the fuction)
but before thet we have to declair it inside the cass */
void student::setfees(int f)
{
    fees = f;
}
void student ::getfees()
{
    cout << "the fees is  : " << fees << endl;
}

int main()
{
    student s1;
    s1.name = "ayman ";
    s1.roll_no = 56;
    s1.marks = 86;

    cout << "name is : " << s1.name << " \n"
         << "marks is: " << s1.marks << " \n"
         << "roll no is: " << s1.roll_no << endl;
    s1.setfees(165000);
    s1.getfees();

    cout << '\n';

    student s2;
    s2.name = "arsalan";
    s2.roll_no = 106;
    s2.marks = 80;

    cout << "name is : " << s2.name << " \n"
         << "marks is: " << s2.marks << " \n"
         << "roll no is: " << s2.roll_no << endl;
    s2.setfees(200000);
    s2.getfees();

    return 0;
}