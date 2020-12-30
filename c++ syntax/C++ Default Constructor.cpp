// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class  Wall {

  private:
       double length;

   public:
    // create a constructor
    Wall() {

        // initialize private variables
        length = 5.5;

        cout << "Creating a wall." << endl;
        cout << "Length = " << length << endl;
    }
};

int main() {

    // create an object
    Wall wall1;

    return 0;
}

/*
Here, when the wall1 object is created, the Wall() constructor is called. This sets the length variable of the object to 5.5.

 If we have not defined a constructor in our class, then the C++ compiler will automatically create a default constructor with an empty code and no parameters.
 */
