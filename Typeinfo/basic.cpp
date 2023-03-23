#include<iostream>
#include<typeinfo>
using namespace std;
class A{
};
class B:public A{
    };
int main(){
     A a,*Aptr;
     B b,*Bptr;
     A *ptr1=new B;
     A *ptr2=new A;
     cout<<typeid(a).name()<<endl;           // 1A
     cout<<typeid(Aptr).name()<<endl;       //  P1A
     cout<<typeid(b).name()<<endl;         //   1B
     cout<<typeid(Bptr).name()<<endl;     //    P1B
     cout<<typeid(ptr1).name()<<endl;    //     P1A
     cout<<typeid(ptr2).name()<<endl;   //      P1A

// typeid(object).name()=====> It return name of the class along with the length of the class as well it specify the pointer instances also    
    return 0;
}