#include <iostream>
using namespace std;

int main()
{   cout<<"AARTI SAHOO 160172022 \n";
    int a = 5, b = 10, temp;
    cin>>a>>b;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}