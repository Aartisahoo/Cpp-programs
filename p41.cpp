
#include <iostream>
using namespace std;

class B1 {
public: 
B1() { cout << "\nNo-argument constructor of the base class B1"; } };
class B2{
public:
B2() { cout << "\nNo-argument constructor of the base class B2";}
};
class D: public B1, public B2{
public:
D(): B2(), B1() {cout << "\nNo-argument constructor of the derived class D"; } };
int main()
{
    cout<<"AARTI SAHOO 16017702022 \n";
    D objd;
}
