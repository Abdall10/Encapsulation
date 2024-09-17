#include <iostream>
using namespace std;
// Default Constructor
// The Constructor type void
class  Test 
{
   private:
   int a, b;

   public:
   Test() // in Constructor don't used return 
   {
        a=1;
        b=2;
   }
   void set()
   {
      a=10;
      b=20;
   }
   void show()
   {
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
   }
};


int main()
{

    Test ob1, ob2;
    ob1.set();
    ob1.show();

    return 0;
}