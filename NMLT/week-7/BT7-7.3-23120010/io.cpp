#include "io.h"
#include <iostream>

void input(int arr[][100], int &n) {
    std::cout << "Nhap N = ";
    std::cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            std::cin >> arr[i][j];
}

void output(int sum_main_diagonal, int sum_anti_diagonal, int row_max_sum, bool is_magic_square) {
    std::cout << "Tong cheo chinh = " << sum_main_diagonal << ".\n";
    std::cout << "Tong cheo phu = " << sum_anti_diagonal << ".\n";
    std::cout << "Dong co tong lon nhat = " << row_max_sum + 1 << ".\n";
    if (is_magic_square)
        std::cout << "Ma tran la ma phuong.";
    else   
        std::cout << "Ma tran khong la ma phuong.";
}