#include<algorithm>
#include<cmath>
Matrix func(Matrix matrix, int k, int n, int i, int j){
    if (k == 1){
        matrix[i * matrix._size + j] = n - std::max(i, j) + 1;
    }
    if (k == 2){
        matrix[i * matrix._size + j] = std::max(i, j)
    }
    if (k == 3){
        matrix[i * matrix._size + j] = std::abs(i - j)
    }
    if (k == 4){
        matrix[i * matrix._size + j] = 1.0 / (i + j - 1)
    }
    return matrix;
}