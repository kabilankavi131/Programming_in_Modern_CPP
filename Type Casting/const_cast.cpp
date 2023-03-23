#include <iostream>
using namespace std;
void Hello(string *n)
{
    cout << "Hello Mr : " << *n << endl;
}
void Hi(const string *&n)
{
    cout << "Hi Mr : " << *n << endl;
}
int main()
{
    string name = "Kabilan K";
    const string *ptr1 = &name;
    string *ptr2 = &name;
    // Hello(ptr1); ====> It will return, argument of type "const std::__cxx11::string *" is incompatible with parameter of type "std::__cxx11::string *"
    Hello(const_cast<string *>(ptr1));
    Hi(const_cast<const string *>(ptr2));
    return 0;
}