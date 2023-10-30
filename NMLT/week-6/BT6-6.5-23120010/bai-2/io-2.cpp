#include "io-2.h"
#include <iostream>
#include <string>
#include <sstream>

void input_2(int &a, int &b, int &c, int &d, char &operation) {
    std::string line;
    do {
        std::cout << "Phan so 1 (a/b) = ";
        std::getline(std::cin, line);
    } while ( !( ( static_cast<std::stringstream> (line) >> a >> b ) && b != 0 ) );

    do {
        std::cout << "Phan so 2 (c/d) = ";
        std::getline(std::cin, line);
    } while ( !( ( static_cast<std::stringstream> (line) >> c >> d ) && d != 0 ) );

    do {
            std::cout << "Phep tinh (+,-,*,/) = ";
            std::getline(std::cin, line);
    } while ( !( ( static_cast<std::stringstream> (line) >> operation ) && (operation == '+' || operation == '-' || operation == '*' || operation == '/') ) );
}

void output_2(int &a, int &b) {
    std::cout << "Ket qua = " << a << "/" << b << "\n";
}
