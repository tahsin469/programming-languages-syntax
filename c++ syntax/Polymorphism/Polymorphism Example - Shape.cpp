#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
public:
    double dim1,dim2;
    shape(double dim1,double dim2) // constructor
    {
        this->dim1=dim1;
        this->dim2=dim2;

    }
    virtual double area() //method
    {
        return 0;
    }
};
class Triangle : public shape
{
    public:
    Triangle(double dim1,double dim2)
    : shape(dim1,dim2) // shape class constructor call
    {

    }
    double area() //overriding method
    {
        return 0.5*dim1*dim2;
    }
};
class Rectangle : public shape
{
    public:
    Rectangle(double dim1,double dim2)
    : shape(dim1,dim2) // shape class constructor call
    {

    }
    double area() //overriding method
    {
        return dim1*dim2;
    }
};
int main()
{
    shape *p;
    Triangle t(10,20);
    Rectangle r(15,52);
    p = & t;
    cout << "Triangle Area= " << p->area() <<endl;
    p = & r;
    cout << "Rectangle Area= " << p->area() <<endl;


    getch();
}

