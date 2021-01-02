#include<iostream>
using namespace std;

// An abstract class with constructor
class Base
{
protected:
   int x;
public:
  virtual void fun() = 0;
  Base(int i) { x = i; }
};

class Derived: public Base
{
    int y;
public:
    Derived(int i, int j):Base(i) { y = j; }
    void fun() { cout << "x = " << x << ", y = " << y; }
};

int main(void)
{
    //Base *c;
    Derived d(4, 5);
    d.fun();
    //c = & d;
    //c->fun();
    return 0;
}
