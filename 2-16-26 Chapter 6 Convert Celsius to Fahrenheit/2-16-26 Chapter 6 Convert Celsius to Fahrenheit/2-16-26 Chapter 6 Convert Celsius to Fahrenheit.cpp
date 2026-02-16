// 2-16-26 Chapter 6 Convert Celsius to Fahrenheit
#include <iostream>
using namespace std;

struct temperature_record
{
	float celsius;
};

void convert_to_fahrenheit(temperature_record& temp_ref);

int main()
{
	temperature_record temp;

	cout << "====== Temperature Conversion ======" << endl;
	cout << "Enter temp in Celsius: ";
	cin >> temp.celsius;

	cout << "Current temp in clesius (before function): " << temp.celsius << endl;

	convert_to_fahrenheit(temp);

	cout << "Temp in Fahrenheit (after functino) : " << temp.celsius << endl;
}

void convert_to_fahrenheit(temperature_record& temp_ref)
{
	temp_ref.celsius = (temp_ref.celsius * 9.0 / 5.0) + 32;

	cout << "Temp converted to Fahrenheit: " << temp_ref.celsius << endl;
}