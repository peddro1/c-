#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;


class Matrix{
    private: 
        int rows, cols;
        int ** matrix;

    public:
        Matrix();
        Matrix(int r, int c);
        Matrix affichage(int r, int c, float *matrix);
        Matrix(int r, int c, float ** matrix);
        Matrix(const Matrix & other);
        Matrix transpose(Matrix ma);
        Matrix identity(int tam);

};

#endif
