#include <iostream>

using namespace std;

int main() {

    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int n : num_array) {
        cout << n << " ";
    }

    return 0;
}

/*
In C++11, a new range-based for loop was introduced to work with collections such as arrays and vectors. Its syntax is:

for (variable : collection) {
    // body of loop
}
Here, for every value in the collection, the for loop is executed and the value is assigned to the variable.

In the above program, we have declared and initialized an int array named num_array. It has 10 items.

Here, we have used a range-based for loop to access all the items in the array.
*/
