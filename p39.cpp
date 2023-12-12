#include <iostream>
using namespace std;

class B{// base class
public:
B(int a) { cout << "One-argument constructor of the base class B"; }
};
class D: public B{ // publicly derived class {
public:
D(int a): B(a) { cout << "\nOne-argument constructor of the derived class D"; }
};
int main(){
    cout<<"AARTI SAHOO 16017702022 \n";
    D objd( 3 ); 
    }