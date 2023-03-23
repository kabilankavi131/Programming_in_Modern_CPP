#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream x;
    x.open("Sample.txt");
    x<<"This is line 1"<<endl;
    x<<"This is line 2"<<endl;
    x<<"This is line 3"<<endl;
    x<<"This is line 4"<<endl;
    x<<"This is line 5"<<endl;
    x.close();
    return 0;
}