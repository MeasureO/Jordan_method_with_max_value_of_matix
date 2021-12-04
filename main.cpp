#include <iostream>
#include <vector>
#include <iostream>
#include "matrix.h"
using namespace std;


int main(int argc, char** argv){
    Matrix matrix;
    if (*argv[3] == 0){
        freopen("input.txt", "r", stdin); // перенаправить стандартный поток вывода в файл
        matrix = Matrix(atoi(argv[0]));
        std::cin >> matrix;
        fclose(stdout);
    }
    std::cout << matrix;
    for(int i = 0; i < argc; i++)
    {
        cout << "Command line parameter:" << argv[i] << endl;
    }
    return 0;
}
