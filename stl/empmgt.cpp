#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

void display_employee(const Employee &employee)
{
    cout << "Employee ID: " << employee.id << ", Employee Name: " << employee.name << ", Salary: $" << employee.salary << endl;
}

int main()
{
    vector<Employee> employees = {
        {1, "John", 50000.0},
        {2, "Jane", 60000.0},
        {3, "Bob", 70000.0},
        {4, "Alice", 80000.0},
        {5, "Rick", 90000.0}};
    sort(employees.begin(),
         employees.end(),
         [](const Employee &e1, const Employee &e2)
         {
             return e1.salary > e2.salary;
         });
    cout << "Employess sorted according to salaray -> Highest to Lowest:\n";

    vector<Employee> high_earners;
    copy_if(employees.begin(),
            employees.end(),
            back_inserter(high_earners),
            [](const Employee &e)
            {
                return e.salary > 70000;
            });

    cout << "Emplyees who are high erners: \n ";
    for_each(employees.begin(), employees.end(), display_employee);

    cout << "Total salary to be paid : ";
    double total_salary = accumulate(employees.begin(),
                                     employees.end(), 0.0,
                                     [](double sum, const Employee &e)
                                     {
                                         return sum + e.salary;
                                     });

    double average_salary = total_salary / employees.size();
    cout << "$" << total_salary << "\nAverage salary: $" << average_salary << endl;

    auto highest_paid = max_element(employees.begin(),
                                    employees.end(),
                                    [](const Employee &e1, const Employee &e2)
                                    {
                                        return e1.salary < e2.salary;
                                    });
    cout << "Highest paid employee: " << (*highest_paid).name << endl;
    return 0;
}
