// Create Media class -> title,price
// Book -> inherits Media -> number of pages
// Tape -> inherits Media -> Playing Time
// Runtime Polymorphism

#include <iostream>
using namespace std;

class Media
{
protected:
    string title;
    float price;

public:
    Media(string t, float p)
    {
        title = t;
        price = p;
    }
    virtual void display() {}
};

class Book : public Media
{
protected:
    int pages;

public:
    Book(string t, float p, int page) : Media(t, p)
    {
        pages = page;
    }
    void display()
    {
        cout << "Title: " << title << endl
             << "Price: " << price << endl
             << "Pages: " << pages << endl;
    }
};

class Tape : public Media
{
protected:
    float time;

public:
    Tape(string t, float p, float tm) : Media(t, p)
    {
        time = tm;
    }
    void display()
    {
        cout << "Title: " << title << endl
             << "Price: " << price << endl
             << "Time: " << time << endl;
    }
};

int main()
{
    Media *ptr;
    char choice;
    do
    {
        int ch;
        cout << "Enter.." << endl;
        cout << "1. To add Book details" << endl;
        cout << "2. To add Tape details" << endl;
        cin >> ch;
        if (ch == 1)
        {
            string title;
            float price;
            int pages;
            cout << "Enter Title, Price and number of pages of book: " << endl;
            cin >> title >> price >> pages;
            Book b(title, price, pages);
            ptr = &b;
            ptr->display();
        }
        else if (ch == 2)
        {
            string title;
            float price;
            float time;
            cout << "Enter Title, Price and playing time: " << endl;
            cin >> title >> price >> time;
            Tape t(title, price, time);
            ptr = &t;
            ptr->display();
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
        cout << "Do you want to continue? (y for yes)" << endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}