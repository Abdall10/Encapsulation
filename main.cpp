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

    void add(string n, int sal) {
        name = n;
        salary = sal;
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
    cout << "\n The Data \n";

    Company c1;
    c1.add("Ahmed", 2500);
    c1.display();

    Company c2;
    c2.add("Ali", 2500);
    c2.display();

    Company c3;
    c3.add("Mohmed", 2500);
    c3.display();

    return 0;
}