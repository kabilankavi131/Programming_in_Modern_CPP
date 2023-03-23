#include<iostream>
using namespace std;
int main(){

    auto sum=[](int a,int b){
        cout<<"Sum of "<<a<<" and "<<b<<" is : "<<a+b<<endl;
    };
    sum(2,3);

    return 0;
}