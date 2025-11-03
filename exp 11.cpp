#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int no;
    string name;
public:
    // Pure virtual function for salary calculation
    virtual void salary() = 0;
    // Pure virtual function to display employee information
    virtual void display() = 0;
};

class SalariedEmployee : public Employee
{
private:
    double monthlySalary;
public:
    void salary() override
    {
        // Get common employee info
        Employee::salary();
        cout << "Enter employee monthly salary: ";
        cin >> monthlySalary;
    }
    void display() override
    {
        cout << endl << "**Salaried Employee:**" << endl;
        Employee::display();
        cout << "Salary: " << monthlySalary << endl;
    }
};

class HourlyEmployee : public Employee
{
private:
    double hours;
    double rate;
public:
    void salary() override
    {
        // Get common employee info
        Employee::salary();
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter hourly rate: ";
        cin >> rate;
    }
    void display() override
    {
        cout << endl << "**Hourly Employee:**" << endl;
        Employee::display();
        cout << "Hours: " << hours << endl;
        cout << "Hourly rate: " << rate << endl;
        cout << "Salary: " << (rate * hours) << endl;
    }
};

class CommissionedEmployee : public Employee
{
private:
    double salarydouble; // Base salary
    double overtime; // Overtime amount (used for commission calculation based on formula)
public:
    void salary() override
    {
        // Get common employee info
        Employee::salary();
        cout << "Enter salary: ";
        cin >> salarydouble;
        cout << "Enter overtime: ";
        cin >> overtime;
    }
    void display() override
    {
        cout << endl << "**Commissioned Employee:**" << endl;
        Employee::display();
        cout << "Salary: " << salarydouble << endl;
        cout << "Overtime: " << overtime << endl;
        // The formula for total salary is taken directly from the provided text/code
        cout << "Total Salary: " << (salarydouble + (overtime * 15)) << endl;
    }
};

int main()
{
    Employee* employees[3];

    // Create objects of derived classes
    SalariedEmployee* salariedEmployee = new SalariedEmployee();
    HourlyEmployee* hourlyEmployee = new HourlyEmployee();
    CommissionedEmployee* commissionedEmployee = new CommissionedEmployee();

    // Assign derived class objects to base class pointer array (Polymorphism)
    employees[0] = salariedEmployee;
    employees[1] = hourlyEmployee;
    employees[2] = commissionedEmployee;

    // Call the virtual salary function
    for (int i = 0; i < 3; i++) {
        employees[i]->salary();
        cout << endl;
    }

    // Call the virtual display function
    for (int i = 0; i < 3; i++) {
        employees[i]->display();
    }

    // Clean up allocated memory (good practice)
    delete salariedEmployee;
    delete hourlyEmployee;
    delete commissionedEmployee;

    return 0;
}
