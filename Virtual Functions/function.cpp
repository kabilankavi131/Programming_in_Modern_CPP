#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A"<<endl;
    }
   virtual void func(){
        cout<<"A Function"<<endl;
    }
    ~A(){
        cout<<"~A"<<endl;
    }
};

class B:public A{
  public:
  B(){
    cout<<"B"<<endl;
  }
  void func(){
    cout<<"B Function"<<endl;
  }
  ~B(){
    cout<<"~B"<<endl;
  }
};

void func(B a){ 
  
    a.func();   
}    

/*
In Function Parameters ,
For func(A a)==> It call class A's function as well as it call  extra Destructor of class A.  output : A B A Function ~A ~B ~A
For func(A &a)==> It call class B's function , it won't call extra destructor.  output : A B B Function ~B ~A
For func(B a)==> It call class B's function , as well as it call  extra Destructor of class B and class A. output : A B B Function ~B ~A ~B ~A
For func(B &a)==>It call class B's function, it won't call any extra destructor. output : A B B Function ~B ~A
 */

int main(){
     B x;
     func(x);
    return 0;
}