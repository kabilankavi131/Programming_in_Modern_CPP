#include <iostream>
using namespace std;
class A
{
public:
    void hi()
    {
        cout << "Hi Class A" << endl;
    }
};
class B : virtual public A
{
};
class C : virtual public A
{
};
class D : public B, public C
{
};
int main()
{
    D a;
    a.hi(); // Now there is no ambiguous error bcoz class B and class C are virtually inherited!
    return 0;
}