// 2-16-26 Chapter 6 Rectangle Resize
#include <iostream>
using namespace std;

struct rectangle
{
	int length;
	int width;
};

void resize_rectangle(rectangle rect_copy, int factor);

int main()
{
	rectangle rect_1;
	int area = 0;
	int factor = 0;

	cout << "====== Making a Rectangle ======" << endl;
	cout << "Enter length of rectangle: ";
	cin >> rect_1.length;

	cout << "Enter width of rectangle: ";
	cin >> rect_1.width;

	cout << "Enter a Factor: ";
	cin >> factor;

	area = rect_1.length * rect_1.width;

	cout << "Area of rectangle: " << area << endl;

	resize_rectangle(rect_1, factor);

	cout << "Area of rectangle after function: " << area << endl;

	return 0;
}

void resize_rectangle(rectangle rect_copy, int factor)
{
	int area = 0;
	int total = 0;

	rect_copy.length = rect_copy.length * factor;
	rect_copy.width = rect_copy.width * factor;

	area = rect_copy.length * rect_copy.width;

	cout << "Area of rectangle (copy): " << area << endl;
}