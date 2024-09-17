#include <iostream>
using namespace std;
//function getter , setter
class Company {
private:
    int salary;
    string name;


public:
  void setValue()
  {
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter  your salary: "<< endl;
    cin >> salary;
  }
  void print()
  {
    cout << "Your name is: " << name << endl;
    cout << "Your salary is: " << salary << " $"<<endl;
  }

    void getName()
    {
        cout << "your name is: " <<name<< endl;

    }
    int getSalary(){
        return salary;
    }
};

int main() 
{
    Company co1 , co2, co3, co4,co5;
    
    co1.setValue();
    co2.setValue();
    co3.setValue();
    co4.setValue();
    cout<<"Total Salary : "<<co1.getSalary()+co2.getSalary()+co3.getSalary()+co4.getSalary()+co5.getSalary()<<" $";


    return 0;
}