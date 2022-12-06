#include <iostream>
#include "../include/complex.hpp"

using namespace std;

int main() {
    float a,b,z,o;
    cout << "Test of displayComplex function: \n" << endl;
    Complex c(1,1);
    cout << " ";
    c.displayComplex(cout);
    cout << endl;
    a=c.getIm();
    b=c.getRe();
    z=c.ComplexModule();
    o=c.ComplexArg();
    Complex c1(4,3);
    Complex c2;
    c2=Echange(c1);
    cout << " ";
    c2.displayComplex(cout);
    cout << endl;

    return 0;
}