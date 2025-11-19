#include <iostream>
using namespace std;

class b;
class a {
    int number = 10;
    friend class b;
};

class b {
public:
    void display(a &t) {
        cout << "number in class A is " << t.number << endl;
    }
};

int main() {
    a obj1;
    b obj2;
    obj2.display(obj1);
    return 0;
}
