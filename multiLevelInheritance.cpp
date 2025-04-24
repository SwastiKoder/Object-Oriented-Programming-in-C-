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
        cout << "breathess.." << endl;
    }
};
class Mammal : public Animal
{
public:
    string bloodtype;
    Mammal()
    {
        bloodtype = "worm";
    }
};
class Dog : public Mammal
{
public:
    void tailwag()
    {
        cout << "A dog wag his tail" << endl;
    }
};
int main()
{
    Dog d1;
    d1.tailwag();
    d1.eat();
    d1.breathe();
    cout << d1.bloodtype << endl;
    return 0;
}