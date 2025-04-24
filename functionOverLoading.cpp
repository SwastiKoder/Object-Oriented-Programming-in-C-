#include <iostream>
#include <string>
using namespace std;
class Print
{
public:
    void show(int x)
    {
        cout << "Int : " << x << endl;
    }
    void show(string str)
    {
        cout << "String : " << str << endl;
    }
};
int main()
{
    Print p1;
    p1.show(5);
    p1.show("hello world");
    return 0;
}