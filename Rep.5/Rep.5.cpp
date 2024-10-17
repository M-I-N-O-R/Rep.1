#include <iostream>

void findMinMax(int* a, int* b, int* c, int* min, int* max) {

	*max = (*a > *b) ? (*a > *c ? *a : *c) : (*b > *c ? *b : *c);

	*min = (*a < *b) ? (*a < *c ? *a : *c) : (*b < *c ? *b : *c);

}

int main() {

	setlocale(0, ".1251");


	int x = 1, y = 2, z = 3;

	int min = 0, max = 0;

	findMinMax(&x, &y, &z, &min, &max);

	std::cout << "Максимум: " << max << std::endl;

	std::cout << "Мiнiмум: " << min << std::endl;

	return 0;
}