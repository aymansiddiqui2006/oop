#include <iostream>
using namespace std;

class student
{
protected:
    string name;

public:
    void getname(string n)
    {
        this->name = n;
    }
    void printname()
    {
        cout << "the name of student is : " << name << endl;
    }
};

class score
{
protected:
    float scr;

public:
    void getscore(int s)
    {
        this->scr = s;
    }
    void print_score()
    {
        cout << "the score of the student is : " << scr << endl;
    }
};

class test : virtual public student
{
protected:
    float sub1;
    float sub2;

public:
    float total;
    void get_marks(int s1, int s2)
    {
        this->sub1 = s1;
        this->sub2 = s2;
    }
    void print_marks()
    {
        cout << "marks in subject 1 is " << sub1 << " marks in subject 2 is " << sub2 << endl;
        total = sub1 + sub2;
        cout << "the total of marks is : " << total << endl;
    }
};

class result : virtual public student, virtual public test, virtual public score
{
public:
    void show_result()
    {
        float res = total + scr;
        cout << "student " << name << " have secured total result of  " << res << " in there acadmics " << endl;
    }
};

int main()
{
    result t;
    t.getname("ayman siddiqui");
    t.printname();
    t.get_marks(90,97);
    t.print_marks();
    t.getscore(56);
    t.print_score();
    t.show_result();
    return 0;
}