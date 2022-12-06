#include "complex.hpp"


Complex::Complex(){
    re = im = 0.0;
}

Complex::Complex(double r, double i){
    re = r;
    im = i;
}

Complex::Complex(const Complex & other){
    re = other.re;
    im = other.im;
}

double Complex::modulus() const {
    return sqrt((re*re) + (im*im));
}

void Complex::exchange(){
    double aux = re;
    re = im;
    im = aux;
}

string Complex::formeComplex(){
    return to_string(re).append("+").append(to_string(im)).append("i") ; 
}

Complex Complex::normalized(const Complex & comp){

    Complex z(comp.re/comp.modulus(), comp.im/comp.modulus() );
    return z;
}