class Matrix {
private:
    int _size;
    std::vector<double> _data;
public:
    Matrix() {
        _size = 0;
    }
    Matrix(int size) {
        _data.resize(size * size);
    }
    friend istream& operator>>(istream& is, const Matrix& mt);
    friend ostream& operator<<(ostream& os, const Matrix& mt);
};

istream& operator>>(istream& is, const Matrix& mt)
{
    // is >> endl;
    return os;
}
ostream& operator<<(ostream& os, const Matrix& mt)
{
    // os << dt.mo << '/' << dt.da << '/' << dt.yr;
    return os;
}
