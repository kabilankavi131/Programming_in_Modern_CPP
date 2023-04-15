#include<iostream>
using namespace std;
template<class T>
class Example{
    public:
    static int count;
    Example(){
        count++;
    }
};
template<class T>
int Example<T>::count=0;
int main(){
    Example <int> a,b,c;
    Example <double> x;
    Example <string>m,n;
    cout<<Example<int>::count<<endl;
    cout<<Example<double>::count<<endl;
    cout<<Example<string>::count<<endl;

    cin.get();
}