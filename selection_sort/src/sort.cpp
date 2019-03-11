#include "sort.hpp"
#include "max_min.hpp"


void descending_order(int& n, int& l, int& k, int* array)
{
    for (int i = 0; i < n; ++i){
       minimum(n, l, k, array);
    }

}

 void ascending_order(int& n, int& l, int& k, int* array)
{
    for (int i = 0; i < n; ++i){
       maximum(n, l, k, array);
    }

}


