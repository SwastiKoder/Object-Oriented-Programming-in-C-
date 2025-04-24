#include <iostream>
using namespace std;
class Animal
{
public:
    string color;
    void eat()
    {
        cout << " Eats.." << endl;
    }
    void breathe()
    {
        cout << "Breathe.." << endl;
    }
};
class Fish : protected Animal // if we does protected
{
public:
    int fins;
    void swim()
    {
        eat();
         cout << "Swims.." << endl;
    }
};
int main()
{
    Fish f1;
    f1.swim();
    // f1.eat(); // we can not access the function here but we can access inside the class
    // f1.breathe();
    return 0;
}