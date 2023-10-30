#include "bai-2.h"
#include "io-2.h"
#include "solve-2.h"
#include <iostream>

void bai_2() {
    int a, b, c, d;
    char operation;
    input_2(a, b, c, d, operation);
    if (c == 0 && operation == '/') {
        std::cout << "Loi chia 0!.\n";
        return;
    }
    solve_2(a, b, c, d, operation);
    output_2(a, b);
}