//Operator Overloading using friend function 

#include <iostream>
using namespace std;

class Num
{
    int n;

public:
    Num(int x = 0)
    {
        n = x;
    }
    void display()
    {
        cout << "n = " << n << endl;
    }
    friend void operator-(Num &num);
};

void operator-(Num &num)
{
    num.n = -num.n;
}

int main()
{
    Num num(10);
    num.display();
    -num;
    num.display();

    return 0;
}