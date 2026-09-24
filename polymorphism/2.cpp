// Class Bankaccount -> acc_no, balance
// class Savings -> inherits Bankaccount -> 4% interest
// class Current -> inherits Bankaccount -> 2% interest
// runtime polymorphism

#include <iostream>
using namespace std;

class BankAccount
{
protected:
    int acc_no;
    float balence;
    float interest;

public:
    BankAccount(int acc, float b)
    {
        acc_no = acc;
        balence = b;
        interest = 0;
    }
    virtual void calculateInt() {}
    void display()
    {
        cout << "Account Number: " << acc_no << endl
             << "Balence: " << balence << endl
             << "Interest: " << interest << endl;
    }
};

class Savings : public BankAccount
{
public:
    Savings(int acc, float bal) : BankAccount(acc, bal) {}
    void calculateInt()
    {
        interest = balence * 0.04;
    }
};

class Current : public BankAccount
{
public:
    Current(int acc, float bal) : BankAccount(acc, bal) {}
    void calculateInt()
    {
        interest = balence * 0.02;
    }
};

int main()
{
    BankAccount *ptr;
    char choice;
    do
    {
        int ch;
        int acc_no;
        float balance;
        cout << "Enter Account number and balence: " << endl;
        cin >> acc_no >> balance;
        cout << "Enter.." << endl;
        cout << "1. If u have savings account" << endl;
        cout << "2. If u have current account" << endl;
        cin >> ch;
        if (ch == 1)
        {
            Savings s(acc_no, balance);
            ptr = &s;
            ptr->calculateInt();
            ptr->display();
        }
        else if (ch == 2)
        {
            Current c(acc_no, balance);
            ptr = &c;
            ptr->calculateInt();
            ptr->display();
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
        cout << "Do you want to continue? (y for yes)" << endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}