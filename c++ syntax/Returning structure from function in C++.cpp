
#include <iostream>
using namespace std;

struct Person {
    char name[50];
    int age;
    float salary;
};

Person getData(Person);
void displayData(Person);

int main()
{

    Person p;

    p = getData(p);
    displayData(p);

    return 0;
}

Person getData(Person p) {

    cout << "Enter Full name: ";
    cin.get(p.name, 50);

    cout << "Enter age: ";
    cin >> p.age;

    cout << "Enter salary: ";
    cin >> p.salary;

    return p;
}

void displayData(Person p)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}

/*

the structure variable p of type structure Person is defined under main() function.

The structure variable p is passed to getData() function which takes input from user which is then returned to main function.

p = getData(p);


 The value of all members of a structure variable can be assigned to another structure using assignment operator = if both structure variables are of same type. You don't need to manually assign each members.

Then the structure variable p is passed to displayData() function, which displays the information.
*/
