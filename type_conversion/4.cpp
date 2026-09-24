// class to class type conversion

#include <iostream>
using namespace std;

class Beta;
class Alpha
{
    int commanA;

public:
    Alpha() {}
    Alpha(int x)
    {
        commanA = x;
    }
    void display()
    {
        cout << "Comman A = " << commanA << endl;
    }
    int getA()
    {
        return commanA;
    }
    Alpha(Beta b);
};

class Beta
{
    int commanB;

public:
    Beta() {}
    Beta(int x)
    {
        commanB = x;
    }
    void display()
    {
        cout << "Comman B = " << commanB << endl;
    }
    int getB()
    {
        return commanB;
    }
    Beta(Alpha a);
};

Alpha::Alpha(Beta b)
{
    int x = b.getB();
    commanA = x;
}

Beta::Beta(Alpha a)
{
    int x = a.getA();
    commanB = x;
}

int main()
{
    Alpha a(10);
    a.display();
    Beta b = a;
    b.display();

    Beta b1(30);
    b1.display();
    Alpha a1 = b1;
    a1.display();
    return 0;
}