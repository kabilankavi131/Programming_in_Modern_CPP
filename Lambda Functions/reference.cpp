#include<iostream>
using namespace std;
int main(){
int num=10;
auto Updatenum=[&num](int a){
    num=num+a;
};
cout<<"Current Value of num : "<<num<<endl;
Updatenum(num);
cout<<"num value after updation : "<<num<<endl;
    return 0;
}