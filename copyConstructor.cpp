#include <iostream>
#include <string>
using namespace std;
class Car
{
public:
    string name;
    string color;
    int *mileage;
    Car(string name, string color)
    {
        this->name = name;
        this->color = color;
        mileage = new int; // Dynamic allocation
        *mileage = 12;
    }
    Car(Car &original) // this is custom copy constructor
    {
        cout << "custopm copy constructor" << endl;
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }
    
};
int main()
{
    Car c1("maruti 800", "white");
    Car c2(c1); // it is done automatically in cpp
    cout << "Car name : " << c2.name << endl;
    cout << "Car color : " << c2.color << endl;

    *c2.mileage = 10; // changing the value for proof
    cout << "Car mileage : " << *c2.mileage << endl;
    *c1.mileage = 15;
    cout << *c1.mileage << endl; // that means c1 and c2 pointing to the same memory location
    return 0;
}