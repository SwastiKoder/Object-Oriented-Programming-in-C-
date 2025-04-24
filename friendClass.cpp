#include <iostream>
#include <string>
using namespace std;
class A
{
    string secret = "secret data";
    friend class B ;
};
class B // becomes a friend of class A
{
public:
    void showSecret(A &obj)
    {
        cout << obj.secret << endl;
    }
};
int main()
{
   B b1 ;
   A a1 ;
   b1.showSecret(a1) ;
    return 0;
}