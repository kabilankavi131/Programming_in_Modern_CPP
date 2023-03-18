#include<iostream>
#include<string>
using namespace std;
struct Kabilan{
  int age;
  float mark;
  char initial;
  string addr;
  bool pass;
};
int main(){

    int *ptr;
    struct Kabilan k;
    k.age=18;
    k.mark=70.50;
    k.initial='K';
    k.addr="Nagapattinam";
    k.pass=true;

   ptr=reinterpret_cast<int*>(&k);
   cout<<"Age : "<<*ptr<<endl;
   ptr++;
   float *f=reinterpret_cast<float*>(ptr);
   cout<<"Mark : "<<*f<<endl;
   ptr++;
   char *c=reinterpret_cast<char*>(ptr);
   cout<<"Initial : "<<*c<<endl;
   ptr++;
   string *b=reinterpret_cast<string*>(ptr);
   cout<<"Address : "<<*b<<endl;
   ptr++;
   bool *p=reinterpret_cast<bool*>(ptr); // Showing unrelated data in this type casting. It returning the length of the previous memory data type
   cout<<"Pass or fail : "<<*p<<endl;
    return 0;
}