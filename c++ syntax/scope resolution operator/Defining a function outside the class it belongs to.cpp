
#include <iostream>
using namespace std;

class Car {
  public:
  void honk(); //Function declared inside class
};

void Car::honk() { //Function defined outside class using ::
  cout << "Beep! Beep!" <<endl;
}
int main() {
  Car ferrari;
  ferrari.honk();
  return 0;
}
