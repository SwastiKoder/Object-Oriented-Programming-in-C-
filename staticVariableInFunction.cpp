#include <iostream>
using namespace std;
void counter()
{// here we declared static that is why the count upgrades but if we do not then the value of count will be 1 
    static int count = 0; // in every call stack and printed 1
    count++;
    cout << "Count is : " << count << endl;
}
int main()
{
    counter();
    counter();
    counter();
    return 0;
}