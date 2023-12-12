#include <iostream>//33
using namespace std;
class A{
    //body base class
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
b.get();
    return 0;
}