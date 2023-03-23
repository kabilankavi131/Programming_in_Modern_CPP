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
class B : public A
{
};
class C: public A
{
};
class D : public B, public C
{
};
int main()
{
    D a;
    a.hi(); // Now it will show ambiguous error bcoz class B and class C are not virtually inherited!
    return 0;
}