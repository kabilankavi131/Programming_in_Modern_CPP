#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> x={11,12,13,14,15};
    vector<int> y(x.begin(),x.end());  // y is the copy of x
    cout<<"Copied elements : "<<endl;
    for(int i:y){
        cout<<i<<endl;
    }
    return 0;
}