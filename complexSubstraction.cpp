#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    void setComplex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void showNum()
    {
        cout << real << " + " << img << " i " << endl;
    }
    Complex operator-(Complex &c2)
    {
        int resReal = this->real - c2.real;
        int resImg = this->img - c2.img;
        Complex c3;
        c3.setComplex(resReal, resImg);
        return c3;
    }
};
int main()
{
    Complex c1;
    Complex c2;
    c1.setComplex(2, 3);
    c2.setComplex(1, 2);
    c1.showNum();
    c2.showNum();
    Complex c3 = c1 - c2;
    cout << "Res = ";
    c3.showNum();
    return 0;
}