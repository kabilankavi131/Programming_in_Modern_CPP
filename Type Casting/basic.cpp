#include<iostream>
using namespace std;
int main(){
    int Int=65;
    float Float=20.15;
    char Char;
    cout<<"Before TypeCasting Float value : "<<Float<<endl;
    Float=(int)Float;
    cout<<"After TypeCasting Float value : "<<Float<<endl; 
    Char=char(Int);
    cout<<"Char TypeCasted from int object : "<<Char<<endl;
    return 0;
}