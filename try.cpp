#include <iostream>
#include <exception>
#include <typeinfo>
using namespace std;
class Person
{
public:
    string FirstName;
    string LastName;
    string FullNames;
    void FullName()
    {
        cout << "Your Full Name is : " << FullNames << endl;
    }
    string operator+(Person x)
    {
        x.FullNames = FirstName + LastName;
        return x.FullNames;
    }
    friend ostream operator<<(ostream &, Person);
};
ostream operator<<(ostream &os, Person p)
{
    cout << "Person Dead!" << endl;
}
int main()
{
    Person p;
    string cname;
    p.FirstName = "Kabilan";
    p.LastName = "Kavi";
    p.FullNames = p.FirstName + p.LastName;
    p.FullName();
    cname = typeid(p).name();
    cout << cname << endl;
    cout << p;
    return 0;
}