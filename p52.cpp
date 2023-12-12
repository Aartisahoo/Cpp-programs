#include <iostream>
using namespace std;
//Write a Program to show the concept of Virtual functions.
class base {
    public:
    void show() {
        cout << "Base class" << endl;
    }
};
class derived : public base {
    public:
    void show() {
        cout << "Derived class" << endl;
    }
};
int main(){
cout<<"AARTI SAHOO 16017702022"<<endl;
derived d;
d.show();
base *b;
b = &d;
b->show();    
    return 0;
}