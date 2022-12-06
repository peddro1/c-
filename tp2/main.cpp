#include "complex.cpp"

Complex foo ( Complex a , Complex b )
{
    Complex z (10 ,10);
    z = a ;
    z = b ;
    return z ;
}


int main(){

    Complex c(0,0);
    Complex o(1, 1);
    Complex x(o);

    Complex z3;


    cout <<  o.getIm() << endl;
    cout <<  o.getRe() << endl;

    cout << o.modulus() <<endl;
    cout << x.formeComplex() <<endl;
    x.exchange();
    cout << x.formeComplex() <<endl;

    z3 = foo ( c , o );

    cout <<  z3.getIm() << endl;
    cout <<  z3.getRe() << endl;

    Complex normalized = o.normalized(o);

    cout <<  normalized.getRe() << endl;
    cout <<  normalized.getIm() << endl;
}
