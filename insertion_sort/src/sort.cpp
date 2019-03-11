#include "sort.hpp"

void descending_order(int* array, int n)
{
	for (int i = 0; i < n-1; ++i){
		if (array[i] <= array[i+1]){
			continue;
		} else {
			int a = array[i+1];
            for (int j = i; j>=0; --j){
                if (a <= array[j] && j != 0){
                     array[j+1] = array[j];
                } else if (a <= array[j] && j == 0) {
                   array[j+1] = array[j];
                    array[0] = a;
                    break;
                } else {
                    array[j+1] = a;
                    break;
                }
            }
        }
    }
}


void ascending_order (int* array, int n)
{
	for (int i = 0; i < n-1; ++i){
		if (array[i] >= array[i+1]){
			continue;
		} else {
			int a = array[i+1];
            for (int j = i; j>=0; --j){
                if (a >= array[j] && j != 0){
                     array[j+1] = array[j];
                } else if (a >= array[j] && j == 0) {
                   array[j+1] = array[j];
                    array[0] = a;
                    break;
                } else {
                    array[j+1] = a;
                    break;
                }
            }
        }
    }

}
