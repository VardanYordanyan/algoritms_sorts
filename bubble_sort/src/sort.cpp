#include "sort.hpp"
#include <iostream>
void ascending_order(int* array, int n, int tmp)
{
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n-1; ++j){
			if (array[j] >= array[j+1]){
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			} else {
				continue;
			}
		}
	}
}
void descending_order(int* array, int n, int tmp)
{
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n-1; ++j){
			if (array[j] <= array[j+1]){
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			} else {
				continue;
			}
		}
	}
}


