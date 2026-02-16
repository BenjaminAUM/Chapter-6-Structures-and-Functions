// 2-16-26 Chapter 6 Employee Salary
#include <iostream>
using namespace std;

struct employee_record
{
	int employee_id;
	int salary;
};

void increase_salary(employee_record employee_copy, int bonus_amount);

int main()
{
	employee_record employee;

	cout << "====== Employee Records ======" << endl;
	cout << "Enter Employee ID: ";
	cin >> employee.employee_id;

	cout << "Enter Employee Salary: ";
	cin >> employee.salary;

	cout << "Employee Current Salary: " << employee.salary << endl;

	increase_salary(employee, employee.salary);

	cout << "Employee Salary after function call: " << employee.salary << endl;
	cout << "==============================" << endl;

	return 0;
}

void increase_salary(employee_record employee_copy, int bonus_amount)
{
	int total = 0;
	cout << "Enter Salary Bonus: ";
	cin >> bonus_amount;

	total = employee_copy.salary + bonus_amount;

	cout << "Employee Updated Salary (copy): " << total << endl;
}