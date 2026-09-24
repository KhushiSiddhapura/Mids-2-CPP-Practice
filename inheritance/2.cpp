// Employee -> name,id,salary
// manager -> inherit employee -> department, team size

#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:
    Employee()
    {
        cout << "Enter Employee id, name and salary" << endl;
        cin >> id >> name >> salary;
    }
    void display()
    {
        cout << "ID: " << id << endl
             << "Name: " << name << endl
             << "Salary: " << salary << endl;
    }
};

class Manager : public Employee
{
    int team;
    string dep;

public:
    Manager()
    {
        cout << "Enter team size and department name:" << endl;
        cin >> team >> dep;
    }
    void displayM()
    {
        display();
        cout << "Team Size: " << team << endl
             << "Department: " << dep << endl;
    }
};

int main()
{
    Employee e1;
    Manager m;
    e1.display();
    m.displayM();
    return 0;
}