#include <iostream>
using namespace std;
class BankAccount
{
    int balance;
    int ac;

public:
    BankAccount(int ac, int balance)
    {
        this->ac = ac;
        this->balance = balance;
    }
    void deposite(int amount)
    {
        balance = balance + amount;
    }
    void withdrawl(int amount)
    {
        balance = balance - amount;
    }
    void showBalance()
    {
        cout << balance << endl;
    }
};
int main()
{
    BankAccount b1(2, 500);
    b1.showBalance();
    b1.deposite(500);
    b1.withdrawl(200);
    b1.showBalance();
    return 0;
}