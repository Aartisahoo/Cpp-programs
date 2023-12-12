#include <iostream>
using namespace std;

class simple_interest{
    public : 
        int p, r, t;
        void getdata(){
            cout << "Enter the principal amount: ";
            cin >> p;
            cout << "Enter the rate of interest: ";
            cin >> r;
            cout << "Enter the time period: ";
            cin >> t;
        }
        void display(){
            cout << "The simple interest is: " << (p*r*t)/100;
        }

};
int main(){
    cout<<"AARTI SAHOO 160172022 \n";
    simple_interest si;
    si.getdata();
    si.display();
    return 0;
}
