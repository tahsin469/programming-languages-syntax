// c++ program to explain
// Encapsulation

#include<iostream>
using namespace std;

class Encapsulation
{
    public:
        // data hidden from outside world
        int x;


        // function to set value of
        // variable x
        void set(int x)
        {
            (*this).x = x; // this->x = x;
        }

        // function to return value of
        // variable x
        int get()
        {
            return x;
        }
};

// main function
int main()
{
    Encapsulation obj;

    obj.set(15);

    cout<<obj.get();
    return 0;
}
