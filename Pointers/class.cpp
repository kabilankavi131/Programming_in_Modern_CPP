#include<iostream>
using namespace std;
class Base{
    public:
 virtual void hi(){
        cout<<"Hi Guys"<<endl;
    }
};
class Derived:public Base{
    void hello(){
        cout<<"Hello Guys"<<endl;
    }
    void hi(){
        cout<<"Overriden hi function"<<endl;
    }
};
int main(){
    Base *b=new Derived();
    b->hi();
    return 0;
}