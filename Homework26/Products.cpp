#pragma once
#include "Products.h"

void printProd(product &prod) {
	std::cout << "�������: " << prod.name << "\n";
	std::cout << "����������: " << prod.number << " ��.\n";
	std::cout << "����: " << prod.price << " ���./��.\n";
	std::cout << "\n";
}

int fullPrice(product &prod) {
	return prod.number * prod.price;
}

void sell(product &prod, int minusQuantity) {
	prod.number -= minusQuantity;
}