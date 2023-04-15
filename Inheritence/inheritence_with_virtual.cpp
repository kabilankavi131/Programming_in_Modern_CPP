#include<iostream>
using namespace std; 

class classA{
public:
virtual void f()
  {
      cout << "A::f() "<<endl; 
      
  }
void g(){
    cout << "A::g() "<<endl; 
  } 
void h(){ 
    cout << "A::h) "<<endl;
    }
};


class classB: public classA{
public:
void f(){ 
    cout <<"B::f() "<<endl; 
    } 
virtual void g(){
    cout << "B::g()"<<endl;;
    }
void h(){
    cout << "B::h() "<<endl;
    }
};

class classC :public classB{
public:
void f(){ 
    cout << "C::f()"<<endl;
    }
void g(){
    cout << "C::g() "<<endl; 
    }
virtual void h(){
    cout << "C::h() "<<endl;
    }
};
int main(){
classC c;
classB b=c; 
classB &ba=c;

b.f();      // B::f()
b.g();      // B::g() 
b.h();      // B::h()

ba.f();     // C::f()
ba.g();     // C::g()
ba.h();     // B::h() 
return 0;
 }