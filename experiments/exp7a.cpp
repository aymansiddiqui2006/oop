#include <iostream>
using namespace std;
class item
{
    int number;
    static int count;
public:
    void data(int n){
        number=n;
        count++; }
    void counts(){
        cout<<"\nthe count is"<<count;}
};
int item::count;
int main()
{
    item t1,t2,t3;
    t1.counts();
    t2.counts();
    t3.counts();
    t1.data(10);
    t2.data(20);
    t3.data(30);
    cout<<"\nAfter reading data"<<endl;
    t1.counts();
    t2.counts();
    t3.counts();
    return 0;
}
