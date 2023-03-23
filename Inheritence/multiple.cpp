#include<iostream>
using namespace std;
class Mom{
    public:
    void calm(){
        cout<<"Mom is so kind"<<endl;
    }
};
class Dad{
    public:
    void angry(){
        cout<<"Dad is so angry"<<endl;
    }
};
class Son:public Mom,public Dad{

};
int main(){
    Son s;
    s.calm();
    s.angry();
    return 0;
}