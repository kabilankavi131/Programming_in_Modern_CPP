#include<iostream>
using namespace std;
#include<memory>

class Entity{
    public:
    int num;
    Entity(){
        cout<<"Entity created !"<<endl;
    }
    ~Entity(){
        cout<<"Entity Destroyed!"<<endl;
    }
    void  func(){ 
    cout<<"Function Called "<<endl;
    }
};
int main()
{
    {
        unique_ptr<Entity> entity(new Entity);  
        entity->func();
    }


    {
        unique_ptr<Entity> entity=make_unique<Entity>();
        entity->func();
    }
    

    cin.get();
    
}