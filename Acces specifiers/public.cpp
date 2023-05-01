#include<iostream>
using namespace std;

// Public ===> Any inherited class and base class can access it through outside of the class

class Dad{
    public:
    string name;
};
class Son:public Dad{

};
int main()
{
    Dad d;
    Son s;
    d.name="Michael";
    s.name="Jhon";
    cout<<"Dad Name : "<<d.name<<endl;
    cout<<"Son Name : "<<s.name<<endl;
    return 0;
}