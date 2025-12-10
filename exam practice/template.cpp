#include <iostream>
using namespace std;

// void Max(t a,t b){
//     cout<<max(a,b)<<endl;
// }
template <typename t>
class number
{
  public:
  t a ;
  t b ;
  number(t x,t y)
  {
    a=x;
    b=y;
    t result = a + b;
    cout << result;
  }
} ;
int main()
{
  // int a=9,b=90;
  //     Max(a,b);
  //     Max<float>(0.0,9.4);
  //     Max<double>(90.9,489);

  number<int> n(4,8);
  return 0;
}