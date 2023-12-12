#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"base constructor called"<<endl;
        }
};
class B:public A
{public:
        void get(){
            cout<<"derived constructor called"<<endl;
        }
        };
int main(){
cout<<"AARTI SAHOO 16017702022"<<endl;
B b;
    return 0;
}