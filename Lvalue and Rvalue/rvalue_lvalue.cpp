#include <iostream>
#include<string>
using namespace std;
void printName(string &name)
{ // To receive Lvalues
    cout << "[Lvalue] : " << name << endl;
}
void printName(string &&name)
{ // To receive Rvalues
    cout << "[Rvalue] : " << name << endl;
}
int main() 
{
    string firstName = "Kabilan";
    string lastName = "Kavi";
    printName(firstName + lastName);
    string fullName = firstName + lastName;
    printName(fullName);
    return 0;
}