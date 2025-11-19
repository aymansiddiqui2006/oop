#include <iostream>
using namespace std;

int call_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int call_ref(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int call_address(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n1, n2;
    cout << " enter the value for n1 and n2 : ";
    cin >> n1 >> n2;

    cout<<"the value of n1 and n2 is before call by value : "<<n1<<" "<<n2<<endl;

    call_value(n1, n2);
    cout<<"the value of n1 and n2 is after call by value : "<<n1<<" "<<n2<<"\n\n";

   cout<<"the value of n1 and n2 is before call by reference: "<<n1<<" "<<n2<<endl;
    call_ref(n1, n2);
    cout<<"the value of n1 and n2 is after call by reference : "<<n1<<" "<<n2<<"\n\n";

   cout<<"the value of n1 and n2 is before call by Address : "<<n1<<" "<<n2<<endl;
    call_address(&n1, &n2);
    cout<<"the value of n1 and n2 is after call by Address : "<<n1<<" "<<n2<<endl;
}