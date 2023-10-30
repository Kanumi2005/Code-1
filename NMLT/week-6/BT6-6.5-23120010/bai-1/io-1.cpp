#include "io-1.h"
#include <iostream>
#include <string>
#include <sstream>

void input_1(int &n) {
    std::string line;
    do {
        std::cout << "Nhap N = ";
        std::getline(std::cin, line);
    } while ( !( (static_cast <std::stringstream> (line) >> n) && n > 0) );
}

void output_1(bool arr[], int n) {
    int cnt = 1;
    for (int i = 2; i <= n; ++i) {
        if (arr[i] == false) {
            std::cout << "#" << cnt << " = " << i << "\n";
            ++cnt;
        }
    }
    --cnt;
    std::cout << "Co tat ca " << cnt << " so nguyen to.\n";
}