#include "io-82.h"
#include <cstdio>

void input(char s[], char t[]) {
    printf("Nhap S = ");
    scanf(" %[^\n]s", s);
    printf("Nhap T = ");
    scanf(" %[^\n]s", t);
}

void output(char str[]) {
    printf("Kiem duyet = %s", str);
}
