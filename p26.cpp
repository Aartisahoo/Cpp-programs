#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    Complex(float r, float i) {
        real = r;
        imaginary = i;
    }

    void display() {
        std::cout << "Complex Number: " << real << " + " << imaginary << "i" << std::endl;
    }

    Complex multiply(const Complex& c) {
        Complex result(0, 0);
        result.real = (real * c.real) - (imaginary * c.imaginary);
        result.imaginary = (real * c.imaginary) + (imaginary * c.real);
        return result;
    }
};

int main() {
    float real1, imaginary1, real2, imaginary2;

    
    cout << "Enter real and imaginary parts of the first complex number: ";
    cin >> real1 >> imaginary1;

    
   cout << "Enter real and imaginary parts of the second complex number: ";
   cin >> real2 >> imaginary2;

    Complex complex1(real1, imaginary1);
    Complex complex2(real2, imaginary2);

    cout << "\nComplex Numbers:\n";
    complex1.display();
    complex2.display();

    Complex result = complex1.multiply(complex2);
    cout << "\nMultiplication Result:\n";
    result.display();

    return 0;
}