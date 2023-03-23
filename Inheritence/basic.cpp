#include<iostream>
using namespace std;
class Base{
    public:
    void sayHi(){
        cout<<"Hi Guys"<<endl;
    }
};
class Derived:public Base{
};
int main(){
    Derived d;
    d.sayHi();
    return 0;
}