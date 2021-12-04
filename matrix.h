#pragma once
class Matrix {
private:
    int _size;
    std::vector<double> _data;
public:
    Matrix() {
        _size = 0;
    }
    Matrix(int size) {
        _size = size;
        _data.resize(size * size);
    }
    friend std::istream& operator>>(std::istream& is, Matrix& mt);
    friend std::ostream& operator<<(std::ostream& os, const Matrix& mt);

    const int getSize(){
        return _size;
    }
    double& operator()(int row, int col)
    {
        return _data[row * _size + col];
    }
 
    double operator()(int row, int col) const
    {
        return _data[row * _size + col];
    }
};

std::istream& operator>>(std::istream& is, Matrix& mt)
{
    for(int i = 0; i < mt._size * mt._size; i++){
        is >> mt._data[i];
    }
    return is;
}
std::ostream& operator<<(std::ostream& os, const Matrix& mt)
{   
    for(int i = 0; i < mt._size; i++){
        for(int j = 0; j < mt._size; j++){
            os << mt._data[i * mt._size + j] << " ";
            }
            os << std::endl;
    }
    return os;
}



