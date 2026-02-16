// 2-16-26 Chapter 6 Return Total and Average
#include <iostream>
using namespace std;

struct result_record
{
	int total;
	float average;
};

result_record calculate_result(int mark_1, int mark_2, int mark_3);

int main()
{
	int mark_1, mark_2, mark_3;

	cout << "====== Marks Record ======" << endl;
	cout << "Enter First Mark: ";
	cin >> mark_1;

	cout << "Enter Second Mark: ";
	cin >> mark_2;

	cout << "Enter Third Mark: ";
	cin >> mark_3;

	result_record result_main = calculate_result(mark_1, mark_2, mark_3);

	cout << "Total: " << result_main.total << endl;
	cout << "Average: " << result_main.average << endl;
	cout << "==========================" << endl;

	return 0;
}

result_record calculate_result(int mark_1, int mark_2, int mark_3)
{
	result_record result_temp;

	result_temp.total = mark_1 + mark_2 + mark_3;

	result_temp.average = result_temp.total / 3.0;

	return result_temp;
}