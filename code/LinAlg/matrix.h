#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix {
public:
    Matrix(); //Generate simple 2x2 identity matrix
    Matrix(const int& n); //Generate n x n identity matrix
    Matrix(const int& rows, const int& cols); //Generate row x col identity matrix (Does not need to be square)

    Matrix(const std::vector<double>& linear, const int& rows, const int& cols); //Generate matrix from a flat list with given dimensions. Not sure what to do if data doesn't fit perfectly
    Matrix(const std::vector<std::vector<double>>& twodim);  //Generate matrix from a 2D array of values

    static Matrix identity(const int& n); //Generate n x n identity matrix
    void transpose();

    inline Matrix operator+(const Matrix& other);
    inline Matrix operator-(const Matrix& other);
    inline Matrix operator*(const Matrix& other);

    inline Matrix getRow(const int& row);
    inline Matrix getCol(const int& col);
    inline unsigned getSize(){return m_data.size();}


private:
    int m_rows;
    int m_cols;

    std::vector<double> m_data; //Flattened array

    inline std::pair<int, int> pos(const int& n){return {n / m_rows, n % m_cols};}
    inline int pos(const int& r, const int& c){return c + r*m_rows;}

};

#endif // MATRIX_H
