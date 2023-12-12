//WAP to illustrate the usage of destructor
#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Constructor of A"<<endl;
    }
    ~A(){
        cout<<"Destructor of A"<<endl;
    }
};
int main(){
    cout<<"AARTI SAHOO 16017702022 \n";
    A obj;
    return 0;
}
