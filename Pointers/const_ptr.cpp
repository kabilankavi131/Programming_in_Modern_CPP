#include <iostream>
int main()
{
    int num1 = 9485;
    int num2 = 795;
    int const* ptr = &num1;
    // *ptr=286; It is an errorneous here bcoz in the pointer to a const variable we can't able to modify the value which points to any variable.
    ptr = &num2;
    std::cout << *ptr << std::endl;
    return 0;
}