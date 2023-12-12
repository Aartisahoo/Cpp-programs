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
        // void display(){
        //     cout << "The complex number is: " << real << " + " << img << "i" << endl;
        // }
        void add(complex, complex);
};
void complex :: add(complex c1, complex c2){
    real = c1.real + c2.real;
    img = c1.img + c2.img;
    cout << "The sum is: " << real << " + " << img << "i" << endl;
}
int main(){
    cout<<"AARTI SAHOO 160172022 \n";
    complex c1, c2;
    c1.getdata();
    c2.getdata();
    c1.add(c1,c2);
    c2.add(c1,c2);
    return 0;
}