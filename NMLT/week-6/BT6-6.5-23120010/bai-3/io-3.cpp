#include "io-3.h"
#include  <iostream>
#include <string>
#include <sstream>

void input_3(double &a, double &b, double &c) {
    std::string line;
    do {
        std::cout << "Nhap a, b, c = ";
        std::getline(std::cin, line);
    } while ( !( (static_cast<std::stringstream> (line) >> a >> b >> c) && a > 0 && b > 0 && c > 0 ) );
}

void output_3(bool is_triangle, bool is_right, bool is_isosceles, bool is_equilateral) {
    if (is_triangle)
        std::cout << "Lap thanh tam giac.\n";
    else {
        std::cout << "Khong lap thanh tam giac!\n";
        return;
    }
    std::cout << "Loai tam giac la";
    if (is_equilateral) {
        std::cout << " deu.";
        return;
    }
    if (is_right)
        std::cout << " vuong";
    if (is_isosceles)
        std::cout << " can";
    if (!is_right && !is_isosceles)
        std::cout << " thuong";
    std::cout << ".\n";
}