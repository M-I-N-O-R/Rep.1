#include <iostream>

void swapWithoutTemp(int* a, int* b) {

	if (a != b) {
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
	}
}

int main() {

	setlocale(0, ".1251");

	int x = 2, y = 3;

	std::cout << "До обмiну: х = " << x << ", y = " << y << std::endl;

	swapWithoutTemp(&x, &y);

	std::cout << "Пiсля обмiну: х = " << x << ", y = " << y << std::endl;

	return 0;
}