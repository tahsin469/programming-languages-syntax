
// C++ program to demonstrate protected members

#include <iostream>
#include <string>
using namespace std;

// base class
class Animal {

   private:
    string color;

   protected:
    string type;

   public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }

    void setColor(string clr) {
        color = clr;
    }

    string getColor() {
        return color;
    }
};

// derived class
class Dog : public Animal {

   public:
    void setType(string tp) {
        type = tp;
    }

    void displayInfo(string c) {
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
    }

    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    // Calling member of the derived class
    dog1.bark();
    dog1.setType("mammal");

    // Using getColor() of dog1 as argument
    // getColor() returns string data
    dog1.displayInfo(dog1.getColor());

    return 0;
}


/*
the variable type is protected and is thus accessible from the derived class Dog. We can see this as we have initialized type in the Dog class using the function setType().

On the other hand, the private variable color cannot be initialized in Dog.

class Dog : public Animal {

    public:
      void setColor(string clr) {
          // Error: member "Animal::color" is inaccessible
          color = clr;
      }
};
Also, since the protected keyword hides data, we cannot access type directly from an object of Dog or Animal class.

// Error: member "Animal::type" is inaccessible
dog1.type = "mammal";

we have used the public keyword in order to inherit a class from a previously-existing base class. However, we can also use the private and protected keywords to inherit classes. For example,

class Animal {
    // code
};

class Dog : private Animal {
    // code
};
class Cat : protected Animal {
    // code
};
The various ways we can derive classes are known as access modes. These access modes have the following effect:

public: If a derived class is declared in public mode, then the members of the base class are inherited by the derived class just as they are.
private: In this case, all the members of the base class become private members in the derived class.
protected: The public members of the base class become protected members in the derived class.
The private members of the base class are always private in the derived class.
*/
