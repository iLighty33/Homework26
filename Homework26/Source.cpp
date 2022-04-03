#include <iostream>
#include "products.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	product Fruits;
	product Vegetables;
	product Electronics;

	Fruits.name = "Orange";
	Fruits.number = 5;
	Fruits.price = 85;

	Vegetables.name = "Tomato";
	Vegetables.number = 7;
	Vegetables.price = 45;

	Electronics.name = "Phone";
	Electronics.number = 3;
	Electronics.price = 5000;

	printProd(Fruits);
	printProd(Vegetables);
	printProd(Electronics);

	cout << "��������: " << Fruits.name << " ���� ������� �����.\n����� ����: " << fullPrice(Fruits) << " ���.\n\n";
	cout << "��������: " << Vegetables.name << " ���� ������� �����.\n����� ����: " << fullPrice(Vegetables) << " ���.\n\n";
	cout << "��������: " << Electronics.name << " ���� ������� �����.\n����� ����: " << fullPrice(Electronics) << " ���.\n\n";

	int quantity = 2;

	sell(Fruits, quantity);
	sell(Vegetables, quantity);
	sell(Electronics, quantity);

	cout << Fruits.name << " ���� �������: " << quantity << " ��.\n������ ����������: " << Fruits.number << " ��.\n\n";
	cout << Vegetables.name << " ���� �������: " << quantity << " ��.\n������ ����������: " << Vegetables.number << " ��.\n\n";
	cout << Electronics.name << " ���� �������: " << quantity << " ��.\n������ ����������: " << Electronics.number << " ��.\n\n";

	return 0;
}