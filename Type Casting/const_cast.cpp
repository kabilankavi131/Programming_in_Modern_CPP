#include<iostream>
using namespace std;
void Hello(string n){
    cout<<"Hello Mr : "<<n<<endl;
}
int main(){
   const string name="Kabilan K";
   Hello(name);
  const int num=10;
  int *ptr1,*ptr2;
   ptr1=const_cast<int*>(&num);
   *ptr1=23;
   cout<<num<<endl;
   

    return 0;
}