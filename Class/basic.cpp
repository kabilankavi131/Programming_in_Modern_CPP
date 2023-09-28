#include <iostream>
using namespace std;
class Student
{
    string name;
public:
    Student(string n) : name{n} {}
    void getname()
    {
        cout << this->name;
    }
};
int main()
{
    Student *s = new Student("Kabilan K");
    s->getname();
    return 0;
}