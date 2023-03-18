#include<iostream>
using namespace std;
class A{
  public:
    void func(){
        cout<<"Hello class A"<<endl;
    }
};

class B:public A{
  public:
  void func(){
    cout<<"Hello class B"<<endl;
  }
};

int main(){
// In Basic Data Types!!
  std::cout<<"In Basic Data Types!!"<<endl;;
   int Int=65;
   float Float=20.15;
   char Char;
   cout<<"Before TypeCasting Float value : "<<Float<<endl;
   Float=static_cast<int>(Float); 
   cout<<"After TypeCasting Float value : "<<Float<<endl; 
   Char=static_cast<char>(Int);
   cout<<"Char TypeCasted from int object : "<<Char<<endl;

// In Class Data Types
   std::cout<<"In Class Data Types!!"<<endl;
   A a;  // assume it as int object
   B b; //  assume it as float object
   a=static_cast<A>(b);  // It's equivalent to int=int(float)  
    return 0;
}