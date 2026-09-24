// program to make object of string
// overload + to concate two object's strings
// overload << to print string
// overload <= to compare string length

#include <iostream>
#include <string>
using namespace std;

class MyString
{
    string str;

public:
    MyString(string s = "")
    {
        str = s;
    }

    MyString operator+(MyString s)
    {
        return MyString(str + s.str);
    }

    bool operator<=(MyString s)
    {
        return str.length() <= s.str.length();
    }

    friend ostream &operator<<(ostream &out, MyString s);
};

ostream &operator<<(ostream &out, MyString s)
{
    out << s.str;
    return out;
}

int main()
{
    MyString s1("Hello");
    MyString s2("World");

    // Concatenation
    MyString s3 = s1 + s2;

    cout << "First String: " << s1 << endl;
    cout << "Second String: " << s2 << endl;
    cout << "Concatenated String: " << s3 << endl;

    // Compare length
    if (s1 <= s2)
        cout << "Length of first string is less than or equal to second string.";
    else
        cout << "Length of first string is greater than second string.";

    return 0;
}