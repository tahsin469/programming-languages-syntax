#include <iostream>
#include "myfirstclass.h"
using namespace std;

int main()
{
    myfirstclass ob1;
    myfirstclass *p = &ob1; // pointer
    p->display(); // Selection Operator (*p).display();
    return 0;
}
