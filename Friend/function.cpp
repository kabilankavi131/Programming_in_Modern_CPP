#include<iostream>
using namespace std;
class Person{
    string name;
    public:
    Person(string n):name(n){}
    friend void showName(Person);
};
void showName(Person a){
    cout<<"Person name : "<<a.name<<endl;
}
int main(){
    Person x("Kabilan K");
    showName(x);
    return 0;
}