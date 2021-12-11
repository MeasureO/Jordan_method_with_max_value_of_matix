#include <iostream>
#include <vector>
#include <iostream>
#include "matrix.h"
#include "function.h"
#include "jordan.h"
using namespace std;

int main(int argc, char **argv)
{
    Matrix matrix;
    if (atoi(argv[3]) == 0)
    {
        freopen("input.txt", "r", stdin); // перенаправить стандартный поток вывода в файл
        matrix = Matrix(atoi(argv[1]));
        std::cin >> matrix;
        fclose(stdin);
    }
    if (atoi(argv[3]) != 0)
    {
        matrix = Matrix(atoi(argv[1]));
        int n = matrix.getSize();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix(i, j) = func(atoi(argv[3]), n, i, j);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j += 2)
            {
                matrix._b[i] += matrix(i, j);
            }
        }
    }
    std::vector<double> x;
    x.resize(atoi(argv[1]));
    //freopen("CON","w",stdout);
    std::cout << matrix;
    std::cout << "----------------------" << std::endl;
    // std::cout << "-----------------------" << endl;
    // matrix.colSwap(1, 2);
    // std::cout << "After columns 1 and 2 swap: " << endl;
    // std::cout << matrix;
    // std::cout << "-----------------------" << endl;
    // std::cout << "After rows 1 and 2 of right_bottom_submatrix swap: " << endl;
    // matrix.rowSwap(1, 2, 2);
    // std::cout << matrix;
    // std::cout << "-----------------------" << endl;
    // for (int i = 0; i < atoi(argv[1]); i++)
    // {
    //     std::cout << "Submatrix max: " << matrix.maxElem(matrix.getSize() - i).first << " " << matrix.maxElem(matrix.getSize() - i).second << endl;
    // }
    //std::cout << "Submatrix max: " << matrix.maxElem(matrix.getSize()).first << " " << matrix.maxElem(matrix.getSize()).second << endl;
    //std::cout << matrix.getSize();
    jordan_solver(atoi(argv[1]), matrix, matrix._b, x);
    for (int i = 0; i < argc; i++)
    {
        cout << "Command line parameter:" << argv[i] << endl;
    }
    return 0;
}
