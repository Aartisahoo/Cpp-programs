#include <iostream>
using namespace std;
class complex
{
    int real;
    int imag;
public:
    complex(int a, int b)
    {
        real = a;
        imag = b;
    }
  
    void output()
    {
        cout << real << "+i" << imag << endl;
    }

    complex operator+(complex& C)
{
    complex temp(real + C.real, imag + C.imag);
    return temp;
}

};

int main()
{
    complex C1(5, 4);
    complex C2(3, 2);
    complex C3(4, 4);
    cout << "C1 is: " << endl;
    C1.output();
    cout << "C2 is : "<< endl;
    C2.output();
    cout << "C3 is: " << endl;
    C3.output();
    C3 = C1 + C2;
    cout << "Now C3 = C1 + C2 is: " << endl;
    C3.output();
}