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
void output(int e[], int size) {
    for (int i = 0; i < size; ++i)
        std::cout << e[i] << " ";
}