#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <map>
#include <vector>



class Matrix
{
    std::map < int, std::vector < std::pair < int, int > > > _matrix ;
    int _width ;
    int _height ;
    int _nbNotZeros ;

public:

    Matrix(int width, int height) ;

    std::vector < std::pair < int, int > > getCoordinates(int value) ;
    int getValue(int column, int line) ;
    void setValue(int column, int line) ;
    void display() ;
    void display(char * fileName);
    Matrix exponent(int n) ;
    Matrix transposed() ;
    Matrix inversed() ;
    Matrix& operator+=(Matrix second) ;
    Matrix& operator-=(Matrix second) ;
    Matrix& operator*=(Matrix second) ;
    Matrix& operator/=(Matrix second) ;
    Matrix& operator=(Matrix second) ;
    std::vector < std::pair < int, int > > operator[](int value) ;

};

Matrix operator+(Matrix const& first, Matrix const& second) ;
Matrix operator-(Matrix const& first, Matrix const& second) ;
Matrix operator*(Matrix const& first, Matrix const& second) ;
Matrix operator/(Matrix const& first, Matrix const& second) ;
bool operator==(Matrix first, Matrix second) ;
bool operator!=(Matrix first, Matrix second) ;
std::ostream& operator<<(std::ostream& flux, Matrix const& matrix) ;


#endif // MATRIX_H
