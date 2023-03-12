#include<iostream>
using namespace std;
class A{
   static int count;
    public:
    A(){
        count++;
    }
    static void get(){
        cout<<"Total count = "<<count<<endl;
    }
};

int A::count=0;

int main(){
    A a,b,c,d,e;
    A::get();
    return 0;

}
