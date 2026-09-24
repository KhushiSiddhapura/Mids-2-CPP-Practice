// To overload ! operator to reverse the case of each alfabet

#include <iostream>
using namespace std;

class myString
{
    string str;

public:
    void accept_string()
    {
        cout << "Enter a string: " << endl;
        cin >> str;
    }
    void display()
    {
        cout << "String: " << str << endl;
    }
    void operator!()
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 65 && str[i] <= 96) // ASCII values
            {
                str[i] = str[i] + 32;
            }
            else if (str[i] >= 97 && str[i] <= 122)
            {
                str[i] = str[i] - 32;
            }
            else
            {
                continue;
            }
        }
    }
};

int main()
{
    myString s1;
    s1.accept_string();
    s1.display();
    !s1;
    s1.display();
    return 0;
}