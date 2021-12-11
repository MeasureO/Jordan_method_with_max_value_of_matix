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
        //matrix(matrix.maxElem(matrix.getSize()).first, matrix.maxElem(matrix.getSize()).second);
        matrix.colSwap(0, matrix.maxElem(matrix.getSize()).second);
        std::cout << matrix;
        std::cout << "------------------------------" << std::endl;
        matrix.rowSwap(0, matrix.maxElem(matrix.getSize()).first, size);
        matrix.bSwap(0, matrix.maxElem(matrix.getSize()).first);
        std::cout << matrix;
        std::cout << "------------------------------" << std::endl;
    }
    return 0;
}