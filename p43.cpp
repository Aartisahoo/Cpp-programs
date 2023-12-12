#include <iostream>
using namespace std;
class B{ // base class
public:
B() { cout << "\nNo-argument constructor of a base class B"; }
};
class D1: public B{ // derived class 
public:
D1() { cout << "\nNo-argument constructor of a base class D1";} };
class D2: public D1{ // publicly derived class 
public:
D2 () { cout << "\nNo-argument constructor of a derived class D2"; } };
int main(){
    cout<<"AARTI SAHOO 16017702022 \n";
D2 objd; };