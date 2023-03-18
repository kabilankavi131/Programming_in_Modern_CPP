#include<iostream>
using namespace std;
class A{
  public:
 virtual void func(){
    cout<<"Hello A"<<endl;
  }
};

class B:public A{
   public:
   void func(){
    cout<<"Hello B"<<endl;
   }
};

int main(){
   B b;
   A *a=&b;
   A c;
   a->func();
   c.func();
    return 0;
}