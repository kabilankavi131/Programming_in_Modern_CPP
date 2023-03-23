#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int *num=(int*)malloc(sizeof(int));
    if(num!=NULL){
        cout<<"Memory Succesfully Allocated !"<<endl;
        *num=12;
        cout<<"First value of num : "<<*num<<endl;
        num++;
        *num=14;
        cout<<"Second value of num : "<<*num<<endl;
        num++;
        *num=16;        
         cout<<"Third value of num : "<<*num<<endl;
    }
    else{
        cout<<"There is an error while allocating memory !!"<<endl;
    }
    return 0;
}