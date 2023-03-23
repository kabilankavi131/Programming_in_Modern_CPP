#include<iostream>
using namespace std;
auto hi=[](){
  cout<<"Hi guys"<<endl;  
};
int main(){
    hi();
    hi(); // You can call lambda functions any time it's not like python 
    hi();
    return 0;
}