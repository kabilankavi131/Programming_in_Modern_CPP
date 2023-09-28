#include <iostream>
using namespace std;
class Player
{
public:
    string name;
    int speed, age, height, weight;
    friend Player operator<<(ostream &os, Player x); // For cout<<x;

    Player operator<<(Player x)
    { // For x<<y;
        cout << endl<<endl<< "Player " << x.name << " Details :" << endl;
        cout << "Speed : " << x.speed << " km per/hour" << endl;
        cout << "Age : " << x.age << endl;
        cout << "Height : " << x.height << " cm" << endl;
        cout << "Weight : " << x.weight << endl;
    }
};
Player operator<<(ostream &os, Player x)
{ // For cout<<x;
    cout << "Player " << x.name << " Details :" << endl;
    cout << "Speed : " << x.speed << " km per/hour" << endl;
    cout << "Age : " << x.age << endl;
    cout << "Height : " << x.height << " cm" << endl;
    cout << "Weight : " << x.weight << endl;
}
int main()
{
    Player x, y;
    x.name = "Kabilan K";
    x.age = 18;
    x.height = 150;
    x.speed = 7;
    x.weight = 50;

    y.name = "Jhon Andreason";
    y.age = 21;
    y.height = 180;
    y.speed = 10;
    y.weight = 80;
    cout << x << y;
    return 0;
}

// Below method is more efficient than the above one !!

/*

#include <iostream>
using namespace std;
class Player
{
public:
    string name;
    int speed, age, height, weight;
    friend ostream operator<<(ostream &os, Player x); 

    
};
ostream operator<<(ostream &os, Player x)
    { 
        cout << endl<<endl<< "Player " << x.name << " Details :" << endl;
        cout << "Speed : " << x.speed << " km per/hour" << endl;
        cout << "Age : " << x.age << endl;
        cout << "Height : " << x.height << " cm" << endl;
        cout << "Weight : " << x.weight << endl;
    }
int main()
{
    Player x, y;
    x.name = "Kabilan K";
    x.age = 18;
    x.height = 150;
    x.speed = 7;
    x.weight = 50;

    y.name = "Jhon Andreason";
    y.age = 21;
    y.height = 180;
    y.speed = 10;
    y.weight = 80;
    cout << x << y;
    return 0;
}

*/