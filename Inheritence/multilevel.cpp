#include<iostream>
using namespace std;
class Base{
    public:
    void sayHi(){
        cout<<"Hi Guys"<<endl;
    }
};
class Derived1:public Base{
    public:
    void sayHello(){
        cout<<"Hello Guys"<<endl;
    }
};
class Derived2:public Derived1{

};
int main(){
    Derived2 d2;
    d2.sayHi();
    d2.sayHello();
    return 0;
}