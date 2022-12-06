#include <iostream>
#include <cmath>
#include "../include/complex.hpp"

using namespace std;

// 1.

Complex::Complex()
    : _Re(1), _Im(1)
{
    cout << "+++Complex()" << endl;
}
Complex::~Complex() {
    cout << "---Complex(" <<this->_Re << "," << this->_Im <<")" << endl;
}
 //a+ib
Complex::Complex(float a,float b)
    :_Re(a),_Im(b)
{
    cout << "+++Complex(" << a << "," << b << ")" << endl;
}

Complex::Complex(const Complex & other)
    : _Re(other._Re),_Im(other._Im)
{
    cout << "rrrComplex(" << _Re << "," << _Im <<")" << endl;
}



// Méthodes retournant les parties réelles et imaginaires ;
float Complex::getRe() const{
    return _Re;
}

float Complex::getIm()const {
    return _Im;
}


// Méthode retournant le module ;
float Complex::ComplexModule() {
    return (sqrt(_Re*_Re+_Im*_Im));
}

// Méthode retournant l'argument: ;
float Complex::ComplexArg() {
    return(atan2(_Re,_Im));
}

// Méthode affichant le complexe sous la forme « a + i.b » ;

void Complex::displayComplex(std::ostream & out) const {
    out << _Re << " + i." << _Im;
}


// Méthode qui échange les parties réelles et imaginaires.
Complex Echange(Complex c) {
    Complex cEch(c.getIm(),c.getRe());
    return cEch;
}

// Ecrire les fonctions (non membres) produit, somme et différence de 2 complexes

Complex sum(Complex c1,Complex c2) {
    Complex c(c1.getRe()+c2.getRe(),c1.getIm()+c2.getIm());
   return c;
}

Complex diff(Complex c1,Complex c2) {
    Complex c(c1.getRe()-c2.getRe(),c1.getIm()-c2.getIm());
   return c;
}

Complex multply(Complex c1,Complex c2) {
    float Re = c1.getRe()*c2.getRe()-c1.getIm()*c2.getIm();
    float Im = c1.getRe()*c2.getIm()-c2.getRe()*c1.getIm();
    Complex C(Re,Im);
    return C;
}

// 1.2. a faire 

// 1.3. 
Complex Complex::operator+(const Complex & c) {
    Complex cSum;
    cSum._Re = _Re + c._Re;
    cSum._Im = _Im +c._Im;
    Complex cSumForm(cSum._Re,cSum._Re);
    return cSumForm; 
}

Complex Complex::operator-(const Complex & c) {
    Complex cDiff;
    cDiff._Re = _Re + c._Re;
    cDiff._Im = _Im +c._Im;
    Complex cDiffForm(cDiff._Re,cDiff._Im);
    return cDiffForm;
}

Complex Complex::operator*(const Complex & c) {
    Complex cMulty;
    cMulty._Re = _Re*c._Re-_Im*c._Im;
    cMulty._Im = _Re*c._Im-c._Re*_Im;
    Complex cMultipForm(cMulty._Re,cMulty._Im);
    return cMultipForm;  
}


// 1.4. 

// 1.5.

//2

// Il me reste op=Complex(a+i.b)

// 3

//3.1.

Complex normalized(Complex c){
    float Re=c.getRe()/c.ComplexModule();
    float Im=c.getIm()/c.ComplexModule();
    Complex C(Re,Im);
    return C;
}

//3.2.


