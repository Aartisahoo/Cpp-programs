#include <iostream>
using namespace std;
class calculator{
    public : 
        int a, b;
        void getdata(){
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
        }
        void add();
        void subtract();
        void multiply();
        void divide();
        void mod();
        };
void calculator :: add(){
    cout << "The sum is: " << a+b<<endl;
}
void calculator :: subtract(){
    cout << "The difference is: " << a-b<<endl;
}
void calculator :: multiply(){
    cout << "The product is: " << a*b<<endl;
}
void calculator :: divide(){
    cout << "The quotient is: " << a/b<<endl;
}
void calculator :: mod(){
    cout << "The remainder is: " << a%b<<endl;
}
int main(){
    cout<<"AARTI SAHOO 160172022 \n";
    calculator c1;
    c1.getdata();
    c1.add();
    c1.subtract();
    c1.multiply();
    c1.divide();
    c1.mod();
    return 0;
}