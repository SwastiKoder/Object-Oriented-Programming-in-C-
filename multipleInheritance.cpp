#include <iostream>
using namespace std;
class Teacher
{
public:
    int salary;
    string subject;
};
class Student
{
public:
    int rollno;
    float cgpa;
};
class TA : public Teacher, public Student
{
public:
    string name;
};
int main()
{
    TA t1;
    t1.name = "swastik priyadarshan";
    t1.rollno = 76;
    t1.cgpa = 9.2;
    t1.subject = "c++";
    cout << "Roll no : " << t1.rollno << endl;
    cout << "Cgpa : " << t1.cgpa << endl;
    cout << "Name : " << t1.name << endl;
    cout << "Subject : " << t1.subject << endl;
    return 0;
}