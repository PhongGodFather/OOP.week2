#include "Complex.h"
istream& operator>>(istream& in, Complex& temp)
{
    cout << "Input real part: ";
    in >> temp.real;
    cout << "Input imaginary part: ";
    in >> temp.imaginary;
    return in;
}
ostream& operator<<(ostream& out, Complex temp)
{
    out << temp.real;
    if (temp.imaginary < 0)
        out << temp.imaginary << "i" << endl;
    else if (temp.imaginary > 0)
        out << "+" << temp.imaginary << "i" << endl;
    else
        out << endl;
    return out;
}
double Complex::computeModule()
{
    return sqrt(real * real + imaginary * imaginary);
}
double Complex::getImaginary() {
    return imaginary;
}
double Complex::getReal() {
    return real;
}
void Complex::setImaginary()
{
    cout << "Input imaginary part: ";
    cin >> imaginary;
}
void Complex::setReal()
{
    cout << "Input real part: ";
    cin >> real;
}
Complex Complex::operator+(Complex a)
{
    Complex temp;
    temp.real = real + a.real;
    temp.imaginary = imaginary + a.imaginary;
    return temp;
}
Complex Complex::operator-(Complex a)
{
    Complex temp;
    temp.real = real - a.real;
    temp.imaginary = imaginary - a.imaginary;
    return temp;
}
Complex Complex::operator*(Complex a)
{
    Complex temp;
    temp.real = real * a.real - imaginary * a.imaginary;
    temp.imaginary = real * a.imaginary + imaginary * a.real;
    return temp;
}
Complex Complex::operator/(Complex a)
{
    Complex temp;
    temp.real = (double)(real * a.real + imaginary * a.imaginary) / (double)(a.real * a.real + a.imaginary * a.imaginary);
    temp.imaginary = (double)(a.real * imaginary - a.imaginary * real) / (double)(a.real * a.real + a.imaginary * a.imaginary);
    return temp;
}