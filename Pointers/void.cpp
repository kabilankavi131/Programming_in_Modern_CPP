#include <iostream>
int main()
{
    int num1 = 10, *num2 = &num1;
    void *num3 =&num1;
    std::cout << *static_cast<int *>(num3) << std::endl;
    return 0;
}