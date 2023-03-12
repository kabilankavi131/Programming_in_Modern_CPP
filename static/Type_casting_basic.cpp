#include<iostream>
using namespace std;
int main(){
   int a=2,b=7;
   double c,d;
   c=b/a;  // Implicit type conversion (done by compiler)
   cout<<"Implicit conversion : "<<c<<endl;
   d=(double)b/a;  // Explicit type conversion (done by user/programmer)
   cout<<"Explicit conversion : "<<d<<endl;
    return 0;
}