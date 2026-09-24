// Operator overloading of unary operator -- using member function

#include <iostream>
using namespace std;

class Nums
{
    int x, y, z;

public:
    Nums(int n1 = 0, int n2 = 0, int n3 = 0)
    {
        x = n1;
        y = n2;
        z = n3;
    }
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }
    void operator--()
    {
        x--;
        y--;
        z--;
    }
};

int main()
{
    Nums n(5, 3, 6);
    n.display();
    --n;
    n.display();
    return 0;
}