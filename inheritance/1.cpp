// Single Inheritance

#include <iostream>
using namespace std;

class Animal
{
    int legs = 4;

public:
    void displayA()
    {
        cout << "Animal Class" << endl;
    }
};

class Dog : public Animal
{
    int tail = 1;

public:
    void displayD()
    {
        cout << "Dog class" << endl;
    }
};

int main()
{
    Dog d;
    d.displayA();
    d.displayD();
    return 0;
}