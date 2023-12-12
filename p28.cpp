//illustrate concept of constructor overloading
#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Constructor of A"<<endl;
    }
    A(int a){
        cout<<"Constructor of A with one argument"<<endl;
    }
    A(int a,int b){
        cout<<"Constructor of A with two argument"<<endl;
    }
};
int main(){
    cout<<"AARTI SAHOO 16017702022 \n";
    A obj1;
    A obj2(10);
    A obj3(10,20);
    return 0;
}