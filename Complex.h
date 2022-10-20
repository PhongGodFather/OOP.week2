#pragma once
#ifndef _COMPLEX_H_
#define  _COMPLEX_H_
#include <iostream>
using namespace std;
class Complex
{
private:
    double imaginary;
    double real;
public:
    double computeModule();
    double getImaginary();
    double getReal();
    void setImaginary();
    void setReal();
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    Complex operator/(Complex);
    friend istream& operator>>(istream& in, Complex& temp);
    friend ostream& operator<<(ostream& out, Complex temp);
};
istream& operator>>(istream& in, Complex& temp);
ostream& operator<<(ostream& out, Complex temp);
#endif