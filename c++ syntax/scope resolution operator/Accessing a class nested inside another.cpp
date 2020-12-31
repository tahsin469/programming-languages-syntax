
#include<iostream>
using namespace std;

class Outer_class {
  public:
  int x;
  Outer_class() { //Outer constructor defined
    this->x = 7;
  }

  class Inner_class { //Declaring a class inside another
    public:
    int x;
    Inner_class() { //Inner constructor defined
      this->x = 8;
    }
  };
};

int main() {
  Outer_class outer;
  //Using :: to access inner class from outer class
  Outer_class::Inner_class inner;
  cout << "Outer x: " << outer.x << endl;
  cout << "Inner x: " << inner.x << endl;
  return 0;
  }
