#include <iostream>
using namespace std;

class Company {
private:
    string name;
    int id;
    int salary;
    static int id_counter; // Static member variable to keep track of the last assigned ID

public:
    Company() {
        id = ++id_counter; // Assign a unique ID to each new object
    }

    void add() {
       cout<<"enter your name :\n";
       cin>>name;
       cout<<"enter your salary :\n";
       cin>>salary;
    }

    void display() {
        cout << "Your name is: " << name << endl;
        cout << "Your id is: " << id << endl;
        cout << "Your salary is: " << salary << " $ \n";
    }
};

// Initialize the static member variable
int Company::id_counter = 0;

int main() {

  Company c1; 
  c1.add();
  c1.display();

  Company c2; 
  c2.add();
  c2.display();

  Company c3; 
  c3.add();
  c3.display();

  Company c4; 
  c4.add();
  c4.display();

    return 0;
}