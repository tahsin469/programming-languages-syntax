// C++ Program to display marks of 5 students

#include <iostream>
using namespace std;

// declare function to display marks
// take a 1d array as parameter
void display(int m[]) {
    cout << "Displaying marks: " << endl;

    // display array elements
    for (int i = 0; i < 5; ++i) {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
}

int main() {

    // declare and initialize an array
    int marks[5] = {88, 76, 90, 61, 69};

    // call display function
    // pass array as argument
    display(marks);

    return 0;
}

/*
When we call a function by passing an array as the argument, only the name of the array is used.
display(marks);
Here, the argument marks represent the memory address of the first element of array marks[5].
However, notice the parameter of the display() function.
void display(int m[5])
Here, we use the full declaration of the array in the function parameter, including the square braces [].
The function parameter int m[5] converts to int* m;. This points to the same address pointed by the array marks. This means that when we manipulate m[5] in the function body, we are actually manipulating the original array marks.

C++ handles passing an array to a function in this way to save memory and time.
*/
