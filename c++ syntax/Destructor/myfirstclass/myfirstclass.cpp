#include "myfirstclass.h"
#include <iostream>
using namespace std;
myfirstclass::myfirstclass() // class_name scope_resolution_operator constructor
{
    //ctor
    cout  << " inside the constructor " << endl;
}
void myfirstclass::display() // class_name scope_resolution_operator function
{
    cout << " inside the displsy method or function " << endl ;
}
myfirstclass::~myfirstclass() // class_name scope_resolution_operator Destructor
{
    //ctor
    cout  << " inside the Destructor " << endl;
}
