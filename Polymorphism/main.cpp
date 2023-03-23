#include <iostream>
using namespace std;
class Ninja;
class Jork;
class Enemy
{
protected:
    int power;

public:
    void setpower(int s)
    {
        power = s;
    }
};

class Ninja : public Enemy
{
public:
    void getpower()
    {
        cout << "Ninja power : " << power << endl;
    }
    friend void wins(Ninja, Jork);
};

class Jork : public Enemy
{
public:
    void getpower()
    {
        cout << "Jork power : " << power << endl;
    }
    friend void wins(Ninja, Jork);
};
void wins(Ninja a, Jork b)
{
    if (a.power > b.power)
    {
        cout << "Ninja wins" << endl;
    }
    else
    {

        cout << "Jork wins" << endl;
    }
}

int main()
{
    Enemy *ptr1, *ptr2;
    Ninja x;
    Jork y;
    ptr1 = &x;
    ptr2 = &y;
    ptr1->setpower(100);
    ptr2->setpower(150);
    x.getpower();
    y.getpower();
    wins(x, y);
    return 0;
}