#include "io-91.h"
#include <cstdio>
#include "fraction.h"

void input(frac &obj) {
    std::printf("Nhap tu so = ");
    std::scanf("%d", &(obj.numerator));
    std::printf("Nhap mau so = ");
    std::scanf("%d", &(obj.denominator));
}

void output(frac sum, frac product, frac reverse_1, frac reverse_2, frac shorten_1, frac shorten_2) {
    std::printf("Tong hai phan so = ");
    display(sum);
    std::printf("\nTich hai phan so = ");
    display(product);
    std::printf("\nNghich dao phan so 1 = ");
    display(reverse_1);
    std::printf("\nNghich dao phan so 2 = ");
    display(reverse_2);
    std::printf("\nRut gon phan so 1 = ");
    display(shorten_1);
    std::printf("\nRut gon phan so 2 = ");
    display(shorten_2);
}
