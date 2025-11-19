#include <iostream>
using namespace std;

int main()
{

    while (1)
        {
            int div, dis;
            cin >> div >> dis;
            try {
                if (dis == 0)
                {
                    throw dis;
                }
                if (dis<0)
                {
                    throw dis;
                }
                else
                {
                    cout << div / dis;
                }
            } catch (int e) {
                cout << "the divisor is " << e;
            }}

            return 0;
}