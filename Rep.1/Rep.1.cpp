#include <iostream>

void copyValue(int* source, int* destination) {
	if (*source != 0 && *destination != 0) {
		*source = *destination;
	}
}

int main() {

	setlocale(0, ".1251");

	int a = 1;
	int b = 0;

	std::cout << "До копiювання: а = " << a << ", b = " << b << std::endl;

	copyValue(&a, &b);

	std::cout << "Пiсля копiювання: a = " << a << ", b = " << b << std::endl;

	
	return 0;
}
