#include<iostream>
#include<conio.h>
using namespace std;
class person
{
public:
    void display()
    {
       cout << "i am a person" << endl;
    }
};
class student : public person
{
    public:
    void display()
    {
       cout << "i am a student" << endl;
    }
};
class teacher : public person
{
    public:
    void display()
    {
       cout << "i am a teacher" << endl;
    }
};
int main()
{
    person p;
    teacher t;
    student s;
    p. display();
    t.display();
    s.display();

    getch();
}
