#include <iostream>
using namespace std;
class Example
{
public:
    Example()
    {
        cout << "Constructor..." << endl;
    }
    ~Example()
    {
        cout << "Destructor..." << endl;
    }
};
int main()
{
    int a = 0;
    if (a == 0)
    {
        // Example ex1;// const->dest->ending
        // because it is not static first constructor runs the dest the code ends
        static Example ex1;//const->end->dest
        //because the object remains to the end of the code
        //Destroyed only when the program ends, not when the block scope ends.
    }
  cout << "Ending.." << endl;
    return 0;
}