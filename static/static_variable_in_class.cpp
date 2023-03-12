#include<iostream>
using namespace std;
class A{
  public:
  static int count;
  A(){
    count++;
  }
};

int A::count=0;   // You should declare the static member outside of the class!! else you will get error

int main(){
   A a,b,c,d;     // Totally 4 obects created so the output is 4
   cout<<A::count<<endl;  // member called uisng scope resolution operator
    return 0;
}