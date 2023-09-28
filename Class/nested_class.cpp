#include <iostream>
using namespace std;
class Student
{
    string name;

public:
    /*Nested Class Started Here.....*/
    class junior
    {
        string name;

    public:
        junior(string n)
        {
            name = n;
        }
        junior() = default;
        void juniorName()
        {
            cout << name << endl;
        }
        void set()
        {
            string n;
            cout << "Enter Junior Name : " << endl;
            cin >> n;
            name = n;
        }
    };
    /*Nested Class Ends Here.........*/
    Student(string n) : name{n} {}
    Student()
    {
        set();
        getname();
    }
    void getname()
    {
        cout << this->name << endl;
        j.juniorName();
    }
    junior j;
    void set()
    {
        string n;
        cout << "Enter Senior Name : " << endl;
        cin >> n;
        name = n;
        j.set();
    }
};
int main()
{
    Student *s = new Student();
    return 0;
}