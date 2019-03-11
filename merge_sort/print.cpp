#include "print.hpp"
#include <iostream>

void print(int* array, int n)
{
	for (int i = 0; i < n; ++i){
		std::cout << array[i] << " , ";
	}
    std::cout << std::endl;
}

