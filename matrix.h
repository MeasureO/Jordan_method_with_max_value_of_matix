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
    

};