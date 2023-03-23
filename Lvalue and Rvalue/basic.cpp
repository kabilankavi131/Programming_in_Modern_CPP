#include <iostream>
using namespace std;
int &GetValue()
{
    static int temp = 28; // this is not local variable it having specific memory address in the program
    return temp;
}
void SetValue(const int& a) // It  create one temporary variable and assign that to this paramete. Like temp=10,a=temp 
{
}
int main()
{
    int x = 10; // Here x is Rvalue and 10 is Lvalue
    int y = GetValue();
    cout << "Current Value of GetValue() : " << y << endl;
    GetValue() = 32;
    cout << "GetValue() After modification : " << GetValue() << endl;
    SetValue(10); // see the function documentation.
    SetValue(x);
    return 0;
}