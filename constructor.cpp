#include <iostream>
#include <string>
using namespace std;
class Car
{
    string name;
    string color;

public:
    Car()
    {
        cout << "Cosntructor without params " << endl;
    }
    Car(string name, string color)
    {
        cout << "Constructor with params" << endl;
        this->name = name; // this is a pointer which points to c1
        this->color = color;
    }
    void start()
    {
        cout << "Car has started" << endl;
    }
    void stop()
    {
        cout << "Car has stopped" << endl;
    }
    // getter
    string getName()
    {
        return name;
    }
    string getColor()
    {
        return color;
    }
};
int main()
{
    Car c0;                        // without params
    Car c1("maruti 800", "white"); // with params
    // cout << "Car name : " << c1.getName() << endl;
    // cout << "Car color : " << c1.getColor() << endl;
    Car c2("Fortuner", "black");

    return 0;
}