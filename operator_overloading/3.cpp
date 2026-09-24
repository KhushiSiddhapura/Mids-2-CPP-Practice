// Operator overloading of post and pre increment

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
    void operator++()
    {
        // pre-increment
        n++;
    }
    void operator++(int)
    {
        // post-increment
        n++;
    }
};

int main()
{
    Num n(6);
    n.display();
    n++;
    n.display();
    ++n;
    n.display();
    return 0;
}