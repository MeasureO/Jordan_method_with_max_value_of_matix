#include <iostream>
#include <vector>
#include <iostream>
#include "matrix.h"
#include "function.h"
using namespace std;


int main(int argc, char** argv){
    Matrix matrix;
    if (atoi(argv[3]) == 0){
        freopen("input.txt", "r", stdin); // перенаправить стандартный поток вывода в файл
        matrix = Matrix(atoi(argv[1]));
        std::cin >> matrix;
        fclose(stdin);
    }
    if (atoi(argv[3]) != 0){
        matrix = Matrix(atoi(argv[1]));
        int n = matrix.getSize();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matrix(i, j) = func(atoi(argv[3]), n, i, j);
            }
        }  
    }
    //freopen("CON","w",stdout);
    std::cout << matrix;
    //std::cout << matrix.getSize();
    for(int i = 0; i < argc; i++)
    {
        cout << "Command line parameter:" << argv[i] << endl;
    }
    return 0;
}
