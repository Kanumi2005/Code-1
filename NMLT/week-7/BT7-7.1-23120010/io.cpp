#include "io.h"
#include <iostream>

void input(int arr[], int &n) {
    std::cout << "Nhap N = ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cout << "Phan tu " << i << " = ";
        std::cin >> arr[i];
    }
}

void output(int number_negative, int number_prime) {
    std::cout << "Co " << number_negative << " so am." << "\n"
              << "Co " << number_prime << " so nguyen to.";
}