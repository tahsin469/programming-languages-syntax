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

   Room(double l,double b,double h)
   {
       length = l ;
       breadth = b ;
       height = h ;
   }
   Room()
   {
       cout << " default constructor" << endl;
   }


    };

int main() {

    // create object of Room class
    Room room1(10.1,11.2,12.2);

    // assign values to data members

    room1.display();





    // create object of Room class
    Room room2(22.2,23.2,25.2);

    // assign values to data members

    room2.display();


    Room ob;




    return 0;
}

