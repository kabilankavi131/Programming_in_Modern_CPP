#include<iostream>
#include<exception>
using namespace std; 
class Base{
    public:
   virtual void hi(){
        cout<<"Hi Base"<<endl;
    }
};
class Derived:public Base{
    public:
    void hi(){
        cout<<"Hi Derived"<<endl;
    }
};
int main(){
    Base *b;
    Derived *d;
    b->hi();
    d->hi();
    return 0;
}