class Matrix {
friend:
    int _size;
    std::vector<double> _data;
public:
    Matrix() {
        _size = 0;
    }
    Matrix(int size) {
        _data.resize(size * size);
    }
    friend std::istream& operator>>(std::istream& is, const Matrix& mt);
    friend std::ostream& operator<<(std::ostream& os, const Matrix& mt);
};

std::istream& operator>>(std::istream& is, const Matrix& mt)
{
    for(int i = 0; i < mt._size * mt._size; i++){
        is >> mt._data[i];
    }
    return is;
}
std::ostream& operator<<(std::ostream& os, const Matrix& mt)
{
    // os << dt.mo << '/' << dt.da << '/' << dt.yr;
    return os;
}



