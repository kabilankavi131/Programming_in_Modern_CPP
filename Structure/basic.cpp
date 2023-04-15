#include<iostream>
using namespace std;
struct Student{
    private:
    string name;
    public:
    Student(string n){
        name=n;
    }
    void show(){
        cout<<name<<endl;
    }
};
int main(){
    struct Student s("Kabilan");
    s.show();
    return 0;
}