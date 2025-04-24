#include <iostream>
using namespace std;
class Parent
{
public:
    void show()
    {
        cout << "Parent Class Show..." << endl;
    }
    virtual void hello()
    {
        cout << "Parent Hello..." << endl;
    }
};
class Child : public Parent
{
public:
    void show()
    {
        cout << "Child Class Show..." << endl; // this will show as the parent function overrides with same name
    }
    void hello()
    {
        cout << "Child hello..." << endl;
    }
};
int main()
{ // although it is parent class pointer but it is pointing to child class so child class show printed
    Child child1;
    Parent *ptr;   // parent class pointer pointing child class
    ptr = &child1; // runt time binding compiler did not know about this
    ptr->hello();
    return 0;
}