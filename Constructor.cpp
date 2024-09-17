#include <iostream>
using namespace std;
// Default Constructor
// The Constructor type void
class  Test 
{
   private:
   int a, b;

   public:
   Test()
   {
    cout<<"This is The first Constructor \n";
   }
    Test(int x, int y)
    {
        a=x;
        b=y;
         cout<<"This is a new Constructor \n";
    }
  
   void show()
   {
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
   }
};


int main()
{

    Test ob1;
    Test ob2(1,2);
    ob1.show();
    ob2.show();
    
    return 0;
}