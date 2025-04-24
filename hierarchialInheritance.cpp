#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "eats.." << endl;
    }
    void breathe()
    {
        cout << "breathes.." << endl;
    }
};
class Bird : public Animal
{
public:
    void fly()
    {
        cout << "flies.." << endl;
    }
};
class Fish : public Animal
{
public:
    void swim()
    {
        cout << "Swims.." << endl;
    }
};
class Mammal : public Animal
{
public:
    void walk()
    {
        cout << "walks.." << endl;
    }
};
int main()
{
    Bird b1;
    Fish f1;
    Mammal m1;
    b1.fly();
    b1.eat();
    b1.breathe();
    f1.swim();
    f1.eat();
    f1.breathe();
    m1.walk();
    m1.breathe();
    m1.eat();
    return 0;
}