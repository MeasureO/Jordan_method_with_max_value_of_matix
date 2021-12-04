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
    void colSwap(int col1, int col2){
        for(int i = 0; i < _size; i++){
            std::swap(_data[i * _size + col1], _data[i * _size + col2]);
        }
    }
    std::pair<int, int> maxElem(int submatrix_size){
        int i_max = 0;
        int j_max = 0;
        double current_max = 0;
        for(int i = _size - submatrix_size; i < _size; i++){
            for(int j = _size - submatrix_size; j < _size; j++){
                if (std::abs(_data[i * _size + j]) > std::abs(current_max)){
                    current_max = _data[i * _size + j];
                    i_max = i;
                    j_max = j;
                }
            }
        }
        return std::make_pair(i_max, j_max);
    }
    // return std::make_pair(im, jm);
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



