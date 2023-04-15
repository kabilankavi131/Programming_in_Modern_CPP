#include <iostream>
#include <memory>
using namespace std;

class Entity
{
public:
    Entity()
    {
        cout << "Entity created !" << endl;
    }
    ~Entity()
    {
        cout << "Entity Destroyed!" << endl;
    }
    void func()
    {
        cout << "Function Called " << endl;
    }
};
int main()
{
    shared_ptr<Entity> entitiy1=make_shared<Entity>();
    shared_ptr<Entity> entitiy2;
    shared_ptr<Entity> entitiy3=make_shared<Entity>();
    entitiy2=entitiy3;
    entitiy1=entitiy2;
    cout<<entitiy1.use_count()<<endl;
    cin.get();
}