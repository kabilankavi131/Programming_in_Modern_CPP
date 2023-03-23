#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
   
   ifstream x;
   string line;
   x.open("Sample.txt");
   if(x.is_open()){
    cout<<"File opened Succesfully"<<endl;
    while(getline(x,line)){
        cout<<line<<endl;;
    }
   }else{
    cout<<"File corrupted"<<endl;
   }

    return 0;
}