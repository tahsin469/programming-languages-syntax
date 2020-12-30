
#include <iostream>
using namespace std;

// Global variable
int num;

// Function declaration
int& test();

int main()
{
    test() = 50;

    cout << num;

    return 0;
}

int& test()
{
    return num;
}
/*
In program above, the return type of function test() is int&. Hence, this function returns a reference of the variable num.

The return statement is return num;. Unlike return by value, this statement doesn't return value of num, instead it returns the variable itself (address).

So, when the variable is returned, it can be assigned a value as done in test() = 5;

This stores 5 to the variable num, which is displayed onto the screen.

Ordinary function returns value but this function doesn't. Hence, you cannot return a constant from the function.
int& test() {
    return 2;
}
You cannot return a local variable from this function.
int& test()
{
    int n = 2;
    return n;
}

*/
