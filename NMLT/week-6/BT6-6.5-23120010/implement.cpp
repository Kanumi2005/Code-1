#include "implement.h"
#include <iostream>
#include <string>
#include <sstream>

bool implement() {
    std::string line;
    int option;
    std::getline(std::cin, line);
    static_cast<std::stringstream> (line) >> option;
    switch(option) {
    case 1:
        bai_1();
        break;
    case 2:
        bai_2();
        break;
    case 3:
        bai_3();
        break;
    case 4:
        bai_4();
        break;
    case 5:
        return false;
    }
    return true;
}