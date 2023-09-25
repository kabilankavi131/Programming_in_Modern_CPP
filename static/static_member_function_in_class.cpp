#include<iostream>
using namespace std;
class A{
   static int count;
   string name="Ksbilan";
    public:
    A(){
        count++;
    }
    static void get(){
        cout<<"Total count = "<<count<<endl; // In static function you can acces or modify only the static variables!
    }
};

int A::count=0;

int main(){
    A a,b,c,d,e;
    A::get();
    return 0;

}
