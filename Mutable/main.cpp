#include <iostream>
class Person
{
private:
    int age;
    std::string name;
    mutable float salary;

public:
    void increment() const
    {
        if (this->salary <= 20000)
        {
            this->salary += 5000;
        }
    }
    Person(std::string Name, int Age, float Salary) : age(Age), name(Name), salary(Salary) {}
    void details()
    {
        std::cout << "Name : " << this->name << std::endl;
        std::cout << "Age : " << this->age << std::endl;
        std::cout << "Salary : " << this->salary << std::endl;
    }
};
int main()
{
    Person *p = new Person("Kabilan K", 19, 10000);
    p->increment();
    p->details();
    return 0;
}   