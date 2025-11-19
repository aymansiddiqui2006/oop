#include <bits/stdc++.h>
using namespace std;

class item
{
    static int count;
    int number;

public:
    void setdata(int a)
    {
        number = a;
        count++;
    }
    void getdata()
    {
        cout << "number is : " << number << endl;
    }
    void getcount()
    {
        cout << "count is : " << count << endl;
    }
};
int item ::count;

int main()
{
    item a, b, c;

    cout << "before gettiing data"<<endl ;

    a.getcount(); // count =0;
    b.getcount(); // count =0
    c.getcount(); // count =0

    a.setdata(4);
    a.getdata();  // 4
    a.getcount(); // c=0+1=1

    b.setdata(40);
    b.getdata();  // 40
    b.getcount(); // c=1+1=2

    c.setdata(400);
    c.getdata();  // 400
    c.getcount(); // c=2+1=3

    cout << "after getting data" <<endl;

    a.getcount(); // 3
    b.getcount(); // 3
    c.getcount(); // 3

    return 0;
}