#include <iostream>
using namespace std;
//overLoding function 
class School {
    private:
    string name;
    int level,id;
    double salary;

    public:
    void set(string n , int l )
    {
        name = n;
        level = l;
        cout<<"Hello "<<name<<endl;
        cout<<"your level is: "<<level<<endl;
    }  
   
    void set(int i ,double s)
    {
        id = i;
        salary = s;
        cout<<"Your id is: "<<id<<endl;
        cout<<"Your Salary is: "<<salary<<" $"<<endl;
    }
};

void School::set(string n , int l)
{
    
}
int main() 
{
    School x;
    x.set("Abdallh",100);     //name , level
    x.set(300,3000);         // id , salary   
    return 0;
}