#include<iostream>
using namespace std;
class Base{
    public:
    int val1;
    int val2;
   virtual void hi(){
        cout<<"Hi Base"<<endl;
    }
};
class Derived:public Base{
    public:
    int val3;
    void hi(){
        cout<<"Hi Derived"<<endl;
    }
};
int main(){
    Derived d;
    Base b1=d;
    Base *b2=new Derived();
    Base &b3=d;
    Base *b4=&d;
    d.hi();     // Hi Derived
    b1.hi();   // Hi Base
    b2->hi();  // Hi Derived
    b3.hi();    // Hi Derived
    b4->hi();   // Hi Derived
    return 0;
}




















// #include<iostream>
// using namespace std;
// class Base{
//     public:
//     int num;
//    virtual void hi(){
//         cout<<"Hi Base"<<endl;
//     }
// };
// class Derived:public Base{
//     public:
//     void hi(){
//         cout<<"Hi Derived"<<endl;
//     }
// };
// int main(){
//     Base b;
//     b.num=12;
//     Derived *d;
//     d=(Derived*)&b;
//     d->hi();
//     return 0;
// }