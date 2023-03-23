#include<iostream>
using namespace std;
class B;
class A{
    int data;
    public:
    A(int n):data(n){}
    friend class B;
};
class B{
    public:
   void showData(A x){
        cout<<"Class A data : "<<x.data<<endl;
        x.data=0;
    }
};
int main(){
    A x(23);
    B y;
    y.showData(x);
    y.showData(x);
    return 0;
}