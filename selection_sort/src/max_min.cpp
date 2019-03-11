#include "max_min.hpp"

void minimum(int& n, int& count, int& k, int* array)
{
    int min = array[0];
    for (int j = 0; j < n-count; ++j){
        if( array[j] <= min){
            min = array[j];
            k = j;
        }
    }
    array[k] = array[n-1-count];
    array [n-1-count] = min;
    ++count;
}



void maximum(int& n, int& count, int& k, int* array)
{
    int max = array[0];
    for (int j = 0; j < n-count; ++j){
        if( array[j] >= max){
            max = array[j];
            k = j;
        }
    }
    array[k] = array[n-1-count];
    array [n-1-count] = max;
    ++count;
}



