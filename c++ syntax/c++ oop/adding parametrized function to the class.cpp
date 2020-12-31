
// Program to illustrate the working of
// objects and class in C++ Programming

#include <iostream>
using namespace std;

// create a class
class Room {

   public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }

    void display()
    {
         cout << "Area of Room =  " << calculateArea() << endl;
    cout << "Volume of Room =  " << calculateVolume() << endl;

    }

    void setValue(double l,double b,double h)
    {
        length = l ;
        breadth = b ;
        height = h ;
    }

    };

int main() {

    // create object of Room class
    Room room1;

    // assign values to data members
    room1.setValue(11.1,12.2,13.3);
    room1.display();





    // create object of Room class
    Room room2;

    // assign values to data members
    room2.setValue(21.1,22.2,23.3);
    room2.display();




    return 0;
}

