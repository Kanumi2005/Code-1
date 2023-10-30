#include "io-4.h"
#include <iostream>
#include <string>
#include <sstream>

void input_4(int &before, int &after) {
    std::string line;
    do {
        std::cout << "Nhap so dien cu va moi = ";
        std::getline(std::cin, line);
    } while ( !( (static_cast<std::stringstream> (line) >> before >> after) && before >= 0 && after >= before) );
}

void output_4(int cost) {
    std::cout << "Tien dien = " << cost << ".\n";
}