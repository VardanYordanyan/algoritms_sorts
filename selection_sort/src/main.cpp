#include <iostream>
#include "print.hpp"
#include "sort.hpp"
#include "check.hpp"

int main()
{
    int n = 10;
    int array[n] = {0};
    int k = 0;
    int count = 0;
    std::cout << "Input 10 number..." << std::endl << std::endl;
    for (int i = 0; i < n; ++i)
    {
        array[i] = check_input();
    }
    std::cout << "if want you decreases push 0" << std::endl;
    std::cout << "if want you growing push !=0" << std::endl;
int inp = check_input();
    if (inp == 0){
    descending_order(n, count, k, array);
    print(array, n);
    } else {
    ascending_order(n, count, k, array);
    print(array, n);
    }
       return 0;
}
