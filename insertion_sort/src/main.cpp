#include "sort.hpp"
#include "print.hpp"
#include "check.hpp"


int main()
{	int n = 10;
	int array[n] = {0};
	for (int i = 0; i < n; ++i){
		array[i] = check_input();
	}
    descending_order(array, n);
    print(array, n);
    ascending_order(array, n);
    print(array, n);
    return 0;
}

























