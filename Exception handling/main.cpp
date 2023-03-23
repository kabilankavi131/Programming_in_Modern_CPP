#include<iostream>
#include<exception>
using namespace std;
int main(){
    int a=1,b=0,c;
    try{
    if(b==0){
    throw 1;
    }
    }
    catch(int){
        cout<<"Zero Division Error"<<endl;
    }
    catch(...){
        cout<<"Unexpected error !"<<endl;
    }
    return 0;
}