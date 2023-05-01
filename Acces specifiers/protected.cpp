#include <iostream>
using namespace std;

// Protected ===> It can accessed only by public base class methods and also in inherited classes mathods but you can't access outside of the classes!.
class Dad
{
protected:
    string name;

public:
    void setName(string n) { name = n; }
    void getName() { cout << name << endl; }
};
class Son : public Dad
{
    void sayHi(){
        cout<<"Hi "<<name<<endl;
    }
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