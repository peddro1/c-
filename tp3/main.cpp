#include "matrix.cpp"

void foo(Matrix){

}

int main(int,  char *[]){
    // Matrix a, b, c;
    // Matrix d = a * b;
    // c = a * b;

    // foo(c * c);

    float **m = {{1.3,2},{3.4,4}};

    Matrix a(2,2);

    Matrix b(2,2, m);

    //cout << a.rows << endl;
   
}