
#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inch;
};

int main()
{
    Distance *ptr, d;

    ptr = &d;

    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    cout << "Enter inch: ";
    cin >> (*ptr).inch;

    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches";

    return 0;
}

/*
a pointer variable ptr and normal variable d of type structure Distance is defined.

The address of variable d is stored to pointer variable, that is, ptr is pointing to variable d. Then, the member function of variable d is accessed using pointer.

 Since pointer ptr is pointing to variable d in this program, (*ptr).inch and d.inch is exact same cell. Similarly, (*ptr).feet and d.feet is exact same cell.

The syntax to access member function using pointer is ugly and there is alternative notation -> which is more common.

ptr->feet is same as (*ptr).feet
ptr->inch is same as (*ptr).inch
*/
