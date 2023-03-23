#include<iostream>
#include<vector>
using namespace std;
// x.begin() ====> It returns the base address of the x list variable
// x.end()  =====> It returns the last adddress of the x list variable
int main(){
    vector<int> x={1,22,3,4,5};
    vector<int>::iterator p=x.begin();
    cout<<"List values : "<<endl;
    while(p!=x.end()){
        cout<<*p<<endl;
        p++;
    }
    return 0;
}