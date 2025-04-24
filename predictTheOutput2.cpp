#include <iostream>
using namespace std;
class Base
{
public:
    virtual void print()
    {
        cout << "base" << endl;
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "derived" << endl;
    }
};
int main()
{
    Base *b = new Derived(); // depends upon the pointer pointing which class 
    b->print();
    delete b;
    return 0;
}