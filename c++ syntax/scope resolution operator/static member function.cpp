
#include<iostream>
using namespace std;

class abc{
    public:
    static int a;
    static int b;
static void fun()
{
    cout << ++a << " " << ++b << endl;
}
abc()
{
    b=0;
}
};
int abc :: a;
int abc :: b;
int main()
{
    abc ob,ob1;
    ob.fun();
    ob.fun();
    ob1.fun();
    return 0;
}
