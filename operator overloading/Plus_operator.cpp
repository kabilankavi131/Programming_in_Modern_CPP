#include<iostream>
using namespace std;
class Player{
    public:
   int speed;
   Player operator+(Player x){
       x.speed=speed+x.speed;
       return x;
   }
};
int main(){
    Player a,b,c;
    a.speed=100;
    b.speed=50;
    c=a+b;
    cout<<"player C speed : "<<c.speed<<endl;
    return 0;
}