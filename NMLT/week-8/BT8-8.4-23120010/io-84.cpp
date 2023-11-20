#include "io-84.h"
#include "format.h"
#include <cstdio>

void input(char str[]) {
    std::printf("Nhap chuoi = ");
    std::scanf("%[^\n]s", str);
}

void output(char str[]) {
    int i = 0;
    std::printf("\"");
    trim_left(str, i);
    for (; str[i] != '\0';) {
        one_space_and_trim_right(str, i);
    }
    std::printf("\"");
}