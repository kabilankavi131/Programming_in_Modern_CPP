#include<iostream>
using namespace std;
namespace Kabilan{
    namespace Kavi{
        void sayhi(){
            cout<<"Hi guys"<<endl;
        }
        namespace Kk{
            void sayhello(){
                cout<<"Hello guys"<<endl;
            }
        }
    }
}
int main(){
    Kabilan::Kavi::Kk::sayhello();
    return 0;
}