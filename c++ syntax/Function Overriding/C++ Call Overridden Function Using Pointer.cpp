// C++ program to access overridden function using pointer
// of Base type that points to an object of Derived class

#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;

    // pointer of Base type that points to derived1
    Base* ptr = &derived1;

    // call function of Base class using ptr
    ptr->print();

    return 0;
}
/*
In this program, we have created a pointer of Base type named ptr. This pointer points to the Derived object derived1.

// pointer of Base type that points to derived1
Base* ptr = &derived1;
When we call the print() function using ptr, it calls the overridden function from Base.

// call function of Base class using ptr
ptr->print();
This is because even though ptr points to a Derived object, it is actually of Base type. So, it calls the member function of Base.

In order to override the Base function instead of accessing it, we need to use virtual functions in the Base class.
*/
