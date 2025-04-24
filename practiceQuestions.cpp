#include <iostream>
#include <string>
using namespace std;
class User
{
    int id;
    string passwd;

public:
    string username;
    User(int id)
    {
        this->id = id;
    }
    // setter
    void setPasswd(string passwd)
    {
        this->passwd = passwd;
    }
    // getter
    string getPasswd()
    {
        return passwd;
    }
    int getId()
    {
        return id;
    }
};
int main()
{
    User u1(76);
    u1.username = "sony";
    u1.setPasswd("swastik");
    cout << u1.username << endl;
    cout << u1.getPasswd() << endl;
    cout << u1.getId() << endl;
    return 0;
}