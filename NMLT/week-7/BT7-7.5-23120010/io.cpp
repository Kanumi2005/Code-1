#include "io.h"
#include <iostream>

void input(int arr[][100], int &m, int &n) {
    std::cout << "Nhap so dong M = ";
    std::cin >> m;
    std::cout << "Nhap so cot N = ";
    std::cin >> n;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            std::cin >> arr[i][j];
}
void output(int arr[][100], int size_row, int size_col) {
    for (int i = 0; i < size_row; ++i) {
        for (int j = 0; j < size_col; ++j)
            std::cout << arr[i][j] << " ";
        std::cout << "\n";
    }    
}
