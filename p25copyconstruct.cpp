// Write a Program which reads a complex number and copies that to another using copy constructor
#include <iostream>
using namespace std;
class complex{
    public:
        int real, img;
        void getdata(){
            cout << "Enter the real part: ";
            cin >> real;
            cout << "Enter the imaginary part: ";
            cin >> img;
        }
        void complex(){
            
        }
};