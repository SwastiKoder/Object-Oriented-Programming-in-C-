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
        cout << "custom copy constructor" << endl;
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }
    ~Car()
    {
        cout << "deleting object.." << endl;
        if(mileage != NULL){
            delete mileage ;
            mileage = NULL ;
        }
    }
};
int main()
{
    Car c1("maruti 800", "white");
    cout << "Car name : " << c1.name << endl;
    cout << "Car color : " << c1.color << endl;
    cout << "Car mileage : " << *c1.mileage << endl ;
    return 0;
}