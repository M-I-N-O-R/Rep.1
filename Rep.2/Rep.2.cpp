#include <iostream>

void countEvenOdd(int* a, int* b, int* c, int* evenCount, int* oddCount) {

	*evenCount = 0;
	*oddCount = 0;

	if (*a % 2 == 0) (*evenCount)++;
	else (*oddCount)++;

	if (*b % 2 == 0) (*evenCount)++;
	else (*oddCount)++;

	if (*c % 2 == 0) (*evenCount)++;
	else (*oddCount)++;
}

int main() {

	setlocale(0, ".1251");

	int x = 2, y = 3, z = 4;
	int even = 0, odd = 0;

	countEvenOdd(&x, &y, &z, &even, &odd);

	std::cout << "Кiлькiсть парних чисел: " << even << std::endl;

	std::cout << "Кiлькiсть непарнх чиел: " << odd << std::endl;

	return 0;
}
