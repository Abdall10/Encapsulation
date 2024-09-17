#include <iostream>
using namespace std;

class Youtube {
private:
    string name;
    int videos;
    int subscribers;


public:
   
    void print() {
           cout << "Your name channel is: " << name << endl;
        cout << "Videos of the channel are : " << videos <<" Videos \n";
        cout << "Number of subscribers to the channel: " << subscribers << " subscribers\n";
    }

    void set(string n, int v, int s) {
    name= n;
    videos = v;
    subscribers = s;
    }
};


int main() {

    cout<<"\nThe first channel: \n";
    Youtube y1;
    y1.set("Meta", 100, 1000);
    y1.print();

    cout<<"\nThe second channel: \n";
    Youtube y2;
    y2.set("insta", 120, 2000);
    y2.print();

    cout<<"\nChannel Three: \n";
     Youtube y3;
    y3.set("face", 150, 3000);
    y3.print();


    return 0;
}