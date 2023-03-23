#include <iostream>
using namespace std;
class Birthday
{
    int day, month, year;

public:
    Birthday(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void printBirthday()
    {
        cout << "Birth day : " << day << "/" << month << "/" << year << endl;
    }
};
class Person
{
    string name;
    Birthday birthday;

public:
    Person(Birthday bday, string nm) : birthday{bday}//  This is classs composition
    {
        name=nm;
    }
    void printName()
    {
        cout << "Name : " << name << endl;
        birthday.printBirthday();
    }
};
int main()
{
    Birthday b(29, 07, 2004);
    Person p(b, "Kabilan K");
    p.printName();
    return 0;
}