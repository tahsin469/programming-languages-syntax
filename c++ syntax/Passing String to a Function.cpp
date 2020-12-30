#include <iostream>

using namespace std;

void display(char *);
void display(string);

int main()
{
    string str1;
    char str[100];

    cout << "Enter a string: ";
    getline(cin, str1);

    cout << "Enter another string: ";
    cin.get(str, 100, '\n');

    display(str1);
    display(str);
    return 0;
}

void display(char s[])
{
    cout << "Entered char array is: " << s << endl;
}

void display(string s)
{
    cout << "Entered string is: " << s << endl;
}

/*
In the above program, two strings are asked to enter. These are stored in str and str1 respectively, where str is a char array and str1 is a string object.

Then, we have two functions display() that outputs the string onto the string.

The only difference between the two functions is the parameter. The first display() function takes char array as a parameter, while the second takes string as a parameter.
*/
