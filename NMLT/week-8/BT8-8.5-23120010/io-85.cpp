#include "io-85.h"
#include <cstdio>

void input(char str[], char &c) {
    std::printf("Nhap chuoi = ");
    std::scanf("%[^\n]s", str);
    std::printf("Nhap ky tu = ");
    std::scanf(" %c", &c);
}

void output(char word[][100], const int &size) {
    for (int i = 0; i < size; ++i)
        std::printf("\"%s\"\n", word[i]);
}