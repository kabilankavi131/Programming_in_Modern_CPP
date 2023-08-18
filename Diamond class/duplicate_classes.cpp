#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "A" << endl;
    }
    ~A()
    {
        cout << "~A" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "B" << endl;
    }
    ~B()
    {
        cout << "~B" << endl;
    }
};
class C : public A
{
public:
    C()
    {
        cout << "C" << endl;
    }
    ~C()
    {
        cout << "~C" << endl;
    }
};
class D : public B, public C
{
public:
    D()
    {
        cout << "D" << endl;
    }
    ~D()
    {
        cout << "~D" << endl;
    }
};
int main()
{
    D x; // Here you can see two A classes in that one is duplicate class 
    return 0;
}