// 10. Constructor in base and derived classes in multiple inheritance
//cons10.cpp: constructor in base and derived classes, order of invocation 
#include <iostream>
using namespace std;
class B1
{
public:
B1() { cout << "\nNo-argument constructor of the base class Bl"; }};
class B2
{
public:
B2() { cout << "\nNo-argument constructor of a base class B2";}
};
class D: public B1, virtual B2 // public Bl, private virtual B2
{
public:
D(): B1(), B2() { cout << "\nNo-argument constructor of the derived class D"; }
};
int main()
{cout<<"AARTI SAHOO 16017702022 \n";
D objd; }