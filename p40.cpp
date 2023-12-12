#include <iostream>
using namespace std;
class Bl { // base class
public:
    Bl() { cout << "\nNo-argument constructor of the base class Bl"; }
};

class B2 {
public:
    B2() { cout << "\nNo-argument constructor of the base class B2"; }
};

class D : public B2, public Bl { // publicly derived class
public:
    D() { cout << "\nNo-argument constructor of the derived class D"; }
};

int main() {
    D objd;
}