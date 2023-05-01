#include<iostream>
using namespace std;
#define sqrt(t) t*t
int main(){
    int num;
    num=10;
    cout<<sqrt(num+1);
    return 0;
}
/*
  Here num value is 10 but the value wil assign as it as how you just used in the parameter  =====> 10+1*10+1
  so the output is 21.
*/