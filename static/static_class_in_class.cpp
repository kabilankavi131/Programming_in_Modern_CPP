#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Constructor A"<<endl;
    }
    ~A(){
        cout<<"Destructor B"<<endl;
    }
};

class B{
    public:
    static A a;
     B(){
        cout<<"Constructor B"<<endl;
     }
     ~B(){
        cout<<"Destructor B"<<endl;
     }
};
A B::a;
int main(){
    B a;
    return 0;
}