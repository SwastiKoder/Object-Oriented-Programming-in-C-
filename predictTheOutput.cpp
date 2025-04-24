#include <iostream>
using namespace std;
class Parent
{
public:
    Parent()
    {
        cout << "Constructor of Parent" << endl; //first
    }
    ~Parent()
    {
        cout << "Destructor of Parent" << endl; //fourth
    }
};
class Child : public Parent
{
public:
    Child()
    {
        cout << "Constructor of Child" << endl; // second
    }
    ~Child()
    {
        cout << "Destructor of child" << endl; //third
    }
};
int main()
{
    Child c1;
    return 0;
}