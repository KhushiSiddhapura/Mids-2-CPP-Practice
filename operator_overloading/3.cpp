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
    
};

int main()
{

    return 0;
}