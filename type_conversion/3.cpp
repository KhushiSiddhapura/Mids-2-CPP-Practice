// convert sum of array to int data type

#include <iostream>
using namespace std;

class Arr
{
    int arr[5];

public:
    Arr()
    {
        cout << "Enter 5 elements in array" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
    void display()
    {
        cout << "Array:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    operator int()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += arr[i];
        }
        return sum;
    }
};

int main()
{
    Arr a;
    a.display();
    int s = a;
    cout << "Sum of elements of array: " << s << endl;
    return 0;
}