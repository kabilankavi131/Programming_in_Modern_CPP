#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> x = {11, 12, 13};
    cout << "Original list values :" << endl;
    for (int i : x)
    {
        cout << i << endl;
    }
    x.push_back(16);
    x.push_back(17);
    cout << "List value after 2 values updated :" << endl;
    for (int i : x)
    {
        cout << i << endl;
    }
    cout << "Total no of elements in the list is : " << x.size() << endl;
    cout << "Value at 3rd index : " << x.at(3) << endl;
    cout << "List firt value : " << x.front() << endl;
    cout << "List last value : " << x.back() << endl;
    cout << "Last value deleted !" << endl;
    x.pop_back();
    cout << "Current last value : " << x.back() << endl;
    x.clear();
    cout<<"All list values are deleted !!"<<endl;
    cout<<"To check list values are empty or not : "<<x.empty()<<endl;
    return 0;
}