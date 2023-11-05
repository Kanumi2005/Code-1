#include "io.h"
#include <iostream>

void input(int arr[], int &n) {
    std::cout << "Nhap N = ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
}
void output(bool is_increasing, bool is_symmetrical, bool is_arithmetic) {
    if (is_increasing)
        std::cout << "Mang tang dan.\n";
    else   
        std::cout << "Mang khong tang dan.\n";
    if (is_symmetrical)
        std::cout << "Mang doi xung.\n";
    else
        std::cout << "Mang khong doi xung.\n";
    if (is_arithmetic)
        std::cout << "Mang lap thanh cap so cong.";
    else
        std::cout << "Mang khong lap thanh cap so cong.";
}