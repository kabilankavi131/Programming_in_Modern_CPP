#include<iostream>
#include<exception>
using namespace std;
class Base{
  public:
  int num;
  void sayhi(){
    cout<<"Hi Guys"<<endl;
  }
};

class Derived:public Base{
   public:
   void sayhi(){
    cout<<"Hello Guys"<<endl;
   }
};
class Derived2:public Base{
   public:
    void hi(){
        cout<<"Hi Derived2 Class"<<endl;
    }
};
int main(){
     
     Base *bptr;
     Derived  d,*dptr2;
     bptr=dynamic_cast<Base*>(&dptr);  // It is a valid cast
     dptr2=dynamic_cast<Derived*>(bptr);
     if(bptr==nullptr){
        cout<<"Memory not allocated properly"<<endl;
     }
     else{
        cout<<"Memory allocated successfully"<<endl;
     }
     try{
        Derived2 &p=dynamic_cast<Derived2&>(d);
     }
     catch(exception& e){
        cout<<e.what()<<endl; // It will return std::bad_cast
     }
    return 0;
}