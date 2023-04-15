#include<iostream>
using namespace std;
template<class T>
class Player{
   public:
   string name;
   Player(T a):name(a){
    cout<<"Welcome Player : "<<a<<endl;
   }
   ~Player(){
    cout<<"Thank you Player : "<<name<<endl;
   }
};
template<>
class Player<int>{
   public:
   Player(int a){
    cout<<"Sorry kindly enter your name, instead of number "<<endl;
   }
   ~Player(){
    cout<<"Thank you"<<endl;
   }
};
int main(){
    Player<string> x("Kabilan K");
    Player<int> y(2);
    return 0;
}