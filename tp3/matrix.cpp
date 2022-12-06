#include "matrix.hpp"

//constructer par default
Matrix::Matrix(){
    rows = cols = 0;
    matrix = nullptr;
}

//constructeur lines et colonnes
Matrix::Matrix(int r, int c){
    rows = r;
    cols = c;
    matrix = nullptr;
}

// //destructor

// Matrix::~Matrix() throw(){ 
//     delete [] matrix;
// }

// //affichage
// Matrix Matrix::affichage(int r, int c, float *matrix){
//     rows = r;
//     cols = c;
//     matrix(matrix);
// }

//constructeur permettant
Matrix::Matrix(int r, int c, float ** matrix){
    rows = r;
    cols = c;

    float ma[rows][cols];

    for(int i = 0; i < r; i++){
        for(int j = 0; j< c; j++){
            ma[i][j] = 1;
        }
    }
    matrix = ma;
}

// //constructeur par recopie
// Matrix::Matrix(const Matrix & other){
//     rows = other.rows;
//     cols = other.cols;
//     matrix = other.matrix;
// }

// //constructeur par déplacement


// //transpose
// Matrix Matrix::transpose(Matrix ma){
//     float aux = 0;
   
//     float transpose[ma.cols][ma.rows];

//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             transpose[j][i] = ma.[i][j];
//         }
//     }

//     Matrix transp(ma.cols, ma.rows, transpose);
//     return transp;
// }

// //creer une matrice identité
// Matrix Matrix::identity(int tam){
//     rows = tam;
//     cols = tam;

//     float ma[rows][cols];

//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j< cols; j++){
//             (i == j)? ma[i][j] = 1: ma[i][j] = 0;
//         }
//     }
//     return Matrix a(rows, cols, ma);
// }


