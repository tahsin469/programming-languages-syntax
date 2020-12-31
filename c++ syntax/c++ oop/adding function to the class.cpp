
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
};

int main() {

    // create object of Room class
    Room room1;

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;
    room1.display();





    // create object of Room class
    Room room2;

    // assign values to data members
    room2.length = 42.5;
    room2.breadth = 30.8;
    room2.height = 19.2;
    room2.display();




    return 0;
}
