#include<iostream>
using namespace std;
int main(){
    int num,*ptr;
    num=10;
    ptr=&num;
    cout<<"Value accessed through normal variable : "<<num<<endl;
    cout<<"Value accessed through pointer variable : "<<*ptr<<endl;
    return 0;
}