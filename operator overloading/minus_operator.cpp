#include <iostream>
using namespace std;
class Num1
{
public:
    int num;
    Num1(int x) : num(x) {}
    Num1 operator-(Num1 temp)
    {
        return this->num - temp.num;
    }    
};
int main()
{
    Num1 a(10), b(5);
    Num1 c = a - b;
    cout<<c.num;
    return 0;
}