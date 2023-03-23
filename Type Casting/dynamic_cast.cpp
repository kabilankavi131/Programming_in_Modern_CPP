#include <iostream>
#include <exception>
using namespace std;
class Base
{
public:
   virtual void sayhi()
   {
      cout << "Hi Guys" << endl;
   }
};

class Derived1 : public Base
{
public:
   void sayhi()
   {
      cout << "Hello Guys" << endl;
   }
};
class Derived2 : public Base
{
public:
   void hi()
   {
      cout << "Hi Derived2 Class" << endl;
   }
};
int main()
{

   Base *bptr;
   
   Derived1 d1, *dptr2;
   Derived2 d2;
   bptr = dynamic_cast<Base *>(&d1);       // It is a valid cast
   dptr2 = dynamic_cast<Derived1 *>(bptr); // It is downcasting (Virtual function should be in base class else it will cause there is no polymorphic in base class)
   if (dptr2 == nullptr)
   {
      cout << "Memory not allocated properly" << endl;
   }
   else
   {
      cout << "Memory allocated successfully" << endl;
   }
   try
   {
      Derived1 &p = dynamic_cast<Derived1 &>(d2);
   }
   catch (exception &e)
   {
      cout << e.what() << endl; // It will return std::bad_cast
   }
   return 0;
}