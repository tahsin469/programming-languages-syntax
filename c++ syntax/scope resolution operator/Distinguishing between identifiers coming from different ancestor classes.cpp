
#include <iostream>
using namespace std;

class Mother {
  protected:
  int age;

  public:
  Mother() { //Constructor defined
    age = 32;
  }
};

class Father {
  protected:
  int age;

  public:
  Father() { //Constructor defined
    age = 34;
  }
};

class Child : public Mother, public Father { //Multiple inheritance
  public:
  string name;
  Child(string name) //Constructor defined
  {
    this->name=name;
  }

  void print_parent_ages()
  {
    //Using :: to access the age variables of both parent classes
    cout << name<< "'s mother's age is " << Mother::age << endl;
    cout << name << "'s father's age is " << Father::age <<endl;
  }
};

int main() {
  Child Sam("Sam");
  Sam.print_parent_ages();
  return 0;
}
