#pragma once
#include "Products.h"

void printProd(product &prod) {
	std::cout << "Продукт: " << prod.name << "\n";
	std::cout << "Количество: " << prod.number << " шт.\n";
	std::cout << "Цена: " << prod.price << " руб./шт.\n";
	std::cout << "\n";
}

int fullPrice(product &prod) {
	return prod.number * prod.price;
}

void sell(product &prod, int minusQuantity) {
	prod.number -= minusQuantity;
}