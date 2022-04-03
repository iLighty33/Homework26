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

	cout << "Продукты: " << Fruits.name << " были куплены сразу.\nОбщая цена: " << fullPrice(Fruits) << " руб.\n\n";
	cout << "Продукты: " << Vegetables.name << " были куплены сразу.\nОбщая цена: " << fullPrice(Vegetables) << " руб.\n\n";
	cout << "Продукты: " << Electronics.name << " были куплены сразу.\nОбщая цена: " << fullPrice(Electronics) << " руб.\n\n";

	int quantity = 2;

	sell(Fruits, quantity);
	sell(Vegetables, quantity);
	sell(Electronics, quantity);

	cout << Fruits.name << " было продано: " << quantity << " шт.\nСейчас количество: " << Fruits.number << " шт.\n\n";
	cout << Vegetables.name << " было продано: " << quantity << " шт.\nСейчас количество: " << Vegetables.number << " шт.\n\n";
	cout << Electronics.name << " было продано: " << quantity << " шт.\nСейчас количество: " << Electronics.number << " шт.\n\n";

	return 0;
}