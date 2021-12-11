#pragma once
#include <algorithm>
#include <cmath>
#include "matrix.h"
#include <vector>
double jordan_solver(int size,
                     Matrix matrix,
                     std::vector<double> b,
                     std::vector<double> x)
{

    for (int i = 0; i < size; i++)
    {
        int row_max = matrix.maxElem(matrix.getSize() - i).first;
        int col_max = matrix.maxElem(matrix.getSize() - i).second;
        //matrix(matrix.maxElem(matrix.getSize()).first, matrix.maxElem(matrix.getSize()).second);
        matrix.colSwap(i, col_max);
        //std::cout << matrix;
        //std::cout << "------------------------------" << std::endl;
        matrix.rowSwap(i, row_max, size - i);
        matrix.bSwap(i, row_max);
        std::cout << matrix;
        std::cout << "---------------------------------------------------------------" << std::endl;
        for (int k = i + 1; k < size; k++)
        {
            for (int j = 0; j < size; j++)
            {
                matrix(k, j) -= matrix(i, j) / matrix(i, i) * matrix(k, i);
            }
            std::cout << matrix;
            std::cout << "---------------------------------------------------------------" << std::endl;
        }
        // std::cout << matrix;
        // std::cout << "------------------------------" << std::endl;
    }
    return 0;
}