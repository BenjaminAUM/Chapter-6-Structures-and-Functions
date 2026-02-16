// 2-16-26 Chapter 6 Create Product and Return It
#include <iostream>
using namespace std;

struct product_record
{
	int product_id;
	float price;
};

product_record create_product(int product_id, float price);

int main()
{
	product_record product;

	cout << "====== Product Records ======" << endl;
	cout << "Enter Product ID: ";
	cin >> product.product_id;

	cout << "Enter Product Price: ";
	cin >> product.price;

	create_product(product.product_id, product.price);

	cout << "Product ID: " << product.product_id << endl;
	cout << "Product Price: " << product.price << endl;

	return 0;
}

product_record create_product(int product_id, float price)
{
	product_record temp_product;

	cout << "Enter Product ID (temp): ";
	cin >> temp_product.product_id;

	cout << "Enter Product Price (temp): ";
	cin >> temp_product.price;

	return temp_product;


}