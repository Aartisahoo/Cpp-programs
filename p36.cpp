#include <iostream>
using namespace std;
class A{
    public:
   A(){
        cout<<"Base  constructor called"<<endl;
        }
    // A(int x){
    //     cout<<"parameter Base  constructor called"<<endl;
    //     }
};
class B:public A
{public:
       
        B(){
            cout<<"constructor derived called";
        }
        };
int main(){
cout<<"AARTI SAHOO 16017702022"<<endl;
B b;
    return 0;
}
