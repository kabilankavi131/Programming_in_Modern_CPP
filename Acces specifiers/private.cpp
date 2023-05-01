#include <iostream>
using namespace std;

// Private ===> It can accessed only by public base class methods, you can't use it outside of the class as well as in any inherited classes.
class Dad
{
private:
    string name;

public:
    void setName(string n) { name = n; }
    void getName() { cout << name << endl; }
};
class Son : public Dad
{
};
int main()
{
    Dad d;
    Son s;
    // d.name="Jhon"; ===>It will show error
    d.setName("Jhon");
    d.getName();
    // s.name="Michael"; ===>It will show error
    s.setName("Michael");
    s.getName();
    return 0;
}