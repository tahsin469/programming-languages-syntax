
#include <iostream>
using namespace std;
class d
{
    public:
const int a;
const int b;
int c;
d(int x, int y,int z)
: a(x),b(y)
{
    cout << a <<endl;
    cout << b <<endl;
    c=z;
    cout << c <<endl;
}
};


int main() {

    d ob1(10,20,30);

    return 0;
}
