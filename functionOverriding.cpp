#include <iostream>
using namespace std;
class Parent
{
public:
    void show()
    {
        cout << "Parent Class Show..." << endl;
    }
};
class Child : public Parent
{
public:
    void show()
    {
        cout << "Child Class Show..." << endl; // this will show as the parent function overrides with same name
    }
};
int main()
{
    Child c1;
    c1.show();
    return 0;
}