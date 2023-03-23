#include<iostream>
using namespace std;
template<typename T>
void func(T a){
    cout<<"Value : "<<a<<endl;
}
void func(char b){
    cout<<"Char : "<<b<<endl;
}

int main(){
    int a=10;
    char c='A';
    func(a);
    func(c);
    return 0;
}