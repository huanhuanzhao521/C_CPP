#include <iostream>
#include "swap.h"

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	std::cout << " a = " << a << std::endl;
	std::cout << " b = " << b << std::endl;
}