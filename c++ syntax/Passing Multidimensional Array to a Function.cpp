// C++ Program to display the elements of two
// dimensional array by passing it to a function

#include <iostream>
using namespace std;

// define a function
// pass a 2d array as a parameter
void display(int n[][2]) {
    cout << "Displaying Values: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "num[" << i << "][" << j << "]: " << n[i][j] << endl;
        }
    }
}

int main() {

    // initialize 2d array
    int num[3][2] = {
        {3, 4},
        {9, 5},
        {7, 1}
    };

    // call the function
    // pass a 2d array as an argument
    display(num);

    return 0;
}

/*
In the above program, we have defined a function named display(). The function takes a two dimensional array, int n[][2] as its argument and prints the elements of the array.

While calling the function, we only pass the name of the two dimensional array as the function argument display(num).

 It is not mandatory to specify the number of rows in the array. However, the number of columns should always be specified. This is why we have used int n[][2].
*/
