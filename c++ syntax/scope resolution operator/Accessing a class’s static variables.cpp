
#include <iostream>
using namespace std;

class Person {
  public:
  static int x;
};

int Person::x = 4; //Person's static variable defined using ::
int main() {
  int x = 14; //Local variable defined
  //Person's static variable defined using ::
  cout << "Static variable x: " << Person::x << endl;
  cout << "Local variable x: " << x << endl;
  return 0;
}
