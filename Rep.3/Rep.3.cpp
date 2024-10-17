#include <iostream>

void multiply(int* a, int* b, int* result) {

	*result = (*a)* (*b);
}

int main() {

	setlocale(0, ".1251");

	int x = 2, y = 3; 

	int product = 0;

	multiply(&x, &y, &product);

	std::cout << "Виведення результату: " << product << std::endl;

	return 0;
}