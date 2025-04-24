#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    int age;
    string name;

    Person(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
};
class Student : public Person
{
    int studid;

public:
    Student(int age, string name, int studid) : Person(age, name)
    {
        this->studid = studid;
    }
    void displayStudentInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Student id : " << studid << endl;
    }
};
int main()
{
    Student alice(22, "Raha", 210);
    alice.displayStudentInfo();
    return 0;
}