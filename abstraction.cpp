#include <iostream>
using namespace std;
// abstract class
class Shape
{
public:
    virtual void draw() = 0; // abstract function , pure virtual function
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "draw circle.." << endl;
    }
};
class Square : public Shape
{
public:
    void draw()
    {
        cout << "draw square.." << endl;
    }
};
int main()
{
    Square squa1;
    squa1.draw();

    Circle crc1;
    crc1.draw();
    return 0;
}