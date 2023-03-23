#include<iostream>
using namespace std;
// Simple class
class Sports{
    public:
    void Sinfo(){
        cout<<"Student Sports Info"<<endl;
    }
};
// Inherited clas from Sports class
class Academics:public Sports{
    public:
    void Ainfo(){
        cout<<"Student Academic Info"<<endl;
    }
};
// Another Simple class
class Results{
    public:
    void results(){
        cout<<"Students Results Info"<<endl;
    }
};
//Hybrid class from Academics and Results !
class Student:public Academics,public Results{
    public:
    void info(){
        cout<<"Student Personal Info"<<endl;
    }
};
int main(){
    Student s;
    s.info();
    s.Ainfo();
    s.Sinfo();
    s.results();
    return 0;
}