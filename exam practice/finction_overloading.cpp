#include <iostream>
using namespace std;

#define pi 3.14

void area(int s)
{
  cout << "\nthe area of the square is :"<<s * s;
  
}

void area(int l, int b)
{
  cout << "\nthe area of the rec is :"<<l * b;
  
}

void area(float r)
{
  float result=pi* r;
  cout << "\nthe area of the circle is :"<<result;
  
}

int main()
{
  int a = 4;
  int l = 2, b = 6;
  float s = 3.5;
  area(a);
  area(l, b);
  area(s);
  return 0;
}