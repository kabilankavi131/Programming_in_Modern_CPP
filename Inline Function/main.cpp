#include<iostream>
using namespace std;
// Inline function try to execute the function fastly rather than normal functions but it only applicable for small functions like this !.
inline int sum(int a,int b){
    return a+b;
}
int main(){
    cout<<sum(12,2)<<endl;
    return 0;
}