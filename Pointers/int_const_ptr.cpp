#include <iostream>
int main()
{
    int num = 10;
    int num2 = 37;
    int* const ptr = &num; // Here we can modify the actual value of ptr points variable but we can't modify the address of initially pointed address to the ptr variable.
    *ptr = 238;
    // ptr=&num2; It will cause error !!
    std::cout << "Pointer value : " << *ptr << std::endl
              << "num Value : " << num;
    return 0;
}