// basic to class type conversion

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
    void display()
    {
        cout << "x = " << x << endl;
    }
};

int main()
{
    Num n;
    n.display();
    int m = 20;
    n = m;
    n.display();
    return 0;
}