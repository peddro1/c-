#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex {
        float _Re;
        float _Im;
public:
    Complex();
    ~Complex();
    Complex(const float Re,const float Im);
    Complex(const Complex & other);
    // Complex operator=(const Complex & other) ;
    float getRe() const;
    float getIm() const;
    float ComplexModule();
    float ComplexArg() ;
    void displayComplex(std::ostream & out) const;
    Complex operator+(const Complex & c);
    Complex operator-(const Complex & c);
    Complex operator*(const Complex & c);

};

    Complex Echange(Complex c) ;
    Complex  sum(Complex c1, Complex c2);
    Complex  diff(Complex c1, Complex c2);
    Complex  multply(Complex c1,Complex c2);

#endif
