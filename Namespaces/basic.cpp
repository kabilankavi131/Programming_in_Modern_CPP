#include<iostream>
using namespace std;
namespace Kabilan{
    int age=18;
    string city="Nagapattinam";
    string country="India";
    string destination="Student";
}
int main(){
    using namespace Kabilan;
    cout<<"City : "<<city<<endl;
    cout<<"Country : "<<country<<endl;
    cout<<"Destination : "<<destination<<endl;
    cout<<"Age : "<<age<<endl;
    return 0;
}