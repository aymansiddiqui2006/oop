#include <iostream>
using namespace std;

class book
{
public:
    int book_id;
    string book_name;
    string author;
    void putdata()
    {
        cout << "\nenter book id :";
        cin >> book_id;
        cout << "\nenter book name :";
        cin >> book_name;
        cout << "\nenter book author :";
        cin >> author;
    }
    void getdata()
    {
        cout << "\nbook id is : " << book_id << endl;
        cout << "\nbook name is : " << book_name << endl;
        cout << "\nbook author is : " << author << endl;
    }
};

int main()
{
    book b[3];
    for (int i = 0; i < 3; i++)
    {
        b[i].putdata();
        b[i].getdata();
    }
    return 0;
}