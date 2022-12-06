#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

class Complex{
    private:
        double re, im;

    public: 
        double getRe() const {
            return re;
        }
        inline double getIm() const;
        double modulus() const;
        Complex();
        Complex(double r, double i);
        Complex(const Complex & other);
        void exchange();
        string formeComplex();
        Complex normalized(const Complex & comp);
};

double Complex::getIm() const{
    return im;
}

#endif