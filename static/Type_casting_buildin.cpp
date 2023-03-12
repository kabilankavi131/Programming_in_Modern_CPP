#include<iostream>
using namespace std;
class A{
public:
  int x,y;
};

class B:public A{
 public:
 void get(){
    cout<<"X : "<<x<<endl;
    cout<<"Y : "<<y<<endl;
 }
};

int main(){
      int a,b;
      float c;
      a=10;
      b=3;
      c=static_cast<float>(a/b);  // syntax : static_cast<data_type>(expression)
      cout<<c<<endl;
    return 0;
}