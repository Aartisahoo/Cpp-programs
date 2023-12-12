#include <iostream>
using namespace std;

class complex {
    int r;
    int i;

public:
    void getdata() {
        cout << "Enter real part: ";
        cin >> r;
        cout << "Enter imag part: ";
        cin >> i;
    }

    complex operator++() {
        complex temp;
        temp.r = ++r;
        temp.i = ++i;
        return temp;
    }

    void showdata() {
        cout << r << " + i " << i << endl;
    }
};

int main() {
    complex C1, C2;
    C1.getdata();
    cout << "C1 before increment" << endl;
    C1.showdata();
    ++C1;
    cout << "C1 after increment" << endl;
    C1.showdata();
    C2 = ++C1;
    cout << "C2 is C1 + 1" << endl;
    C2.showdata();
    return 0;
}