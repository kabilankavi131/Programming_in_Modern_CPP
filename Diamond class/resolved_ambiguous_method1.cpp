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
class B :  public A
{
};
class C :  public A
{
};
class D : public B, public C
{
};
int main()
{
    D a;
    a.B::hi(); // Now there is no ambiguous error bcoz here you're mentioned that from which class you're calling the hi method().
    return 0;
}