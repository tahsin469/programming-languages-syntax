
// Program to illustrate the working of
// objects and class in C++ Programming

#include <iostream>
#include <conio.h>
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
};

int main() {

    // create object of Room class
    Room room1;

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;


    // create object of Room class
    Room room2;

    // assign values to data members
    room2.length = 42.5;
    room2.breadth = 30.8;
    room2.height = 19.2;

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room2.calculateArea() << endl;
    cout << "Volume of Room =  " << room2.calculateVolume() << endl;

    getch();
}
