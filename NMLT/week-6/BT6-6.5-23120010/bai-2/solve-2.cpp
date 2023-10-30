#include "solve-2.h"

void solve_2(int &a, int &b, int &c, int &d, char &operation) {
    switch (operation) {
        case '+':
            a = a * d + b * c;
            b = b * d;
            break;
        case '-':
            a = a * d - b * c;
            b = b * d;
            break;
        case '*':
            a = a * c;
            b = b * d;
            break;
        case '/':
            a = a * d;
            b = b * c;
    }
}