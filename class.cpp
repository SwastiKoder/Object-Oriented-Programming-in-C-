#include <iostream>
#include <string>
using namespace std;
class Student
{

    // Properties
    string name;
    float cgpa;

public:
    // Methods
    void getPercentage()
    {
        cout << (cgpa * 10) << "%" << endl;
    }
    // setters
    void setName(string nameVal)
    {
        name = nameVal;
    }
    void setCgpa(float cgpaVal)
    {
        cgpa = cgpaVal;
    }
    // getters
    string getName()
    {
        return name;
    }
    float getCgpa()
    {
        return cgpa;
    }
};
int main()
{
    Student s1;
    s1.setName("swastik");
    cout << s1.getName() << endl;
    return 0;
}