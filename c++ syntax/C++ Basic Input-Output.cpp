#include <iostream>
using namespace std;

int main() {
    char a;
    int num;

    cout << "Enter a character and an integer: ";
    cin >> a >> num;

    cout << "Character: " << a << endl;
    cout << "Number: " << num;

    return 0;
}
/*We first include the iostream header file that allows us to display output.
The cout object is defined inside the std namespace. To use the std namespace, we used the using namespace std; statement.
Every C++ program starts with the main() function. The code execution begins from the start of the main() function.
cout is an object that prints the string inside quotation marks " ". It is followed by the << operator.
return 0; is the "exit status" of the main() function. The program ends with this statement, however, this statement is not mandatory.
Note: If we don't include the using namespace std; statement, we need to use std::cout instead of cout.

This is the preferred method as using the std namespace can create potential problems.

The endl manipulator is used to insert a new line. That's why each output is displayed in a new line.
The << operator can be used more than once if we want to print different variables, strings and so on in a single statement. For example:
cout << "character: " << ch << endl;

In C++, cin takes formatted input from standard input devices such as the keyboard. We use the cin object along with the >> operator for taking input.

cin >> num;
to take input from the user. The input is stored in the variable num. We use the >> operator with cin to take input.

Note: If we don't include the using namespace std; statement, we need to use std::cin instead of cin.
*/
