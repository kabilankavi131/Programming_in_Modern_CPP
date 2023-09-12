#include<iostream>
int x;
int& change(){
    return x;
}
int main(){
    change()=10;
    std::cout<<x<<std::endl;
    change()=734;
    std::cout<<x<<std::endl;
    return 0;
}