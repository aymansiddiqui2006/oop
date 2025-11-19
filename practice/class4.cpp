#include <iostream>
using namespace std;

class train
{
private:
    int train_no;
    string source;
    string destination;
    int date;

public:
    string name;  
    void putdata();
    void getdata();
};
void train::putdata()
{
    cout << "train no. and source and destination and date" << endl;
    cin >> train_no >> source >> destination >> date;
}
void train::getdata()
{
    cout << train_no << " " << source << " " << destination << " " << date;
}

int main()
{
    train t1;
    t1.name={"ayman"};
    cout<<t1.name;
    t1.putdata();
    t1.getdata();

    return 0;
}