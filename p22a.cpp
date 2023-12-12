#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(double r, double i) : real(r), imag(i) {}

    Complex add(const Complex& other) const {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    void display() const {
        cout << "Result: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex num1(2.5, 3.0);
    Complex num2(1.5, 2.5);

    Complex sum = num1.add(num2);

    sum.display();

    return 0;
}