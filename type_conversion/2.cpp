// class to basic type converstion

#include <iostream>
using namespace std;

class Num
{
    int x;

public:
    Num()
    {
        x = 0;
    }
    Num(int n)
    {
        x = n;
    }
    operator int()
    {
        int a = x;
        return a;
    }
    void display()
    {
        cout << "x = " << x << endl;
    }
};

int main()
{
    Num n(20);
    n.display();
    int m = n;
    cout << "m = " << m << endl;
    return 0;
}