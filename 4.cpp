#include <iostream>
using namespace std;
// class circle radius setValue() printArea() area of circle R^2 : 3.14
class Circle {
private:
    double radius;


public:
   void setValue(){
    cout << "Enter the radius of the circle: ";
    cin>>radius;
   }
    
void printArea(){              // in The code , Two square = 2*2 , 2 cube = 2*2*2
   
   double area;
   area=3.14*radius*radius;
   cout<<"The area of the circle is "<<area<<endl;
    }
};

int main() {
    
    Circle c1;
    c1.setValue();
    c1.printArea();


    return 0;
}