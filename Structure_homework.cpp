#include <iostream>
using namespace std;

struct Complex {
    double real;
    double imag;
};


Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}


Complex subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}


Complex multiply(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}


Complex divide(Complex a, Complex b) {
    Complex result;
    double denom = b.real * b.real + b.imag * b.imag;
    result.real = (a.real * b.real + a.imag * b.imag) / denom;
    result.imag = (a.imag * b.real - a.real * b.imag) / denom;
    return result;
}


void print(Complex c) {
    if (c.imag >= 0)
        cout << c.real << " + " << c.imag << "i";
    else
        cout << c.real << " - " << -c.imag << "i";
}

int main() {
    Complex c1, c2;

    c1.real = 3;
    c1.imag = 4;

    c2.real = 1;
    c2.imag = -2;

    cout << "c1 = ";
    print(c1);
    cout << endl;

    cout << "c2 = ";
    print(c2);
    cout << endl << endl;

    Complex sum = add(c1, c2);
    cout << "Сума: ";
    print(sum);
    cout << endl;

    Complex diff = subtract(c1, c2);
    cout << "Різниця: ";
    print(diff);
    cout << endl;

    Complex prod = multiply(c1, c2);
    cout << "Множення: ";
    print(prod);
    cout << endl;

    Complex quot = divide(c1, c2);
    cout << "Ділення: ";
    print(quot);
    cout << endl;
}