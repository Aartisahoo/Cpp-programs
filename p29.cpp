// illustrate usage of constructors with default arguments
#include<iostream>
using namespace std;
//deault argumen constructor
class A{
    public:
    A(int a=10){
        cout<<"Constructor of A"<<endl;
    }
};
int main(){
    cout<<"AARTI SAHOO 16017702022 \n";
    A obj1;
    A obj2(20);
    return 0;
}