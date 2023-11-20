#include "io-83.h"
#include <cstdio>
#include <cstring>

void input(char str[]) {
    std::printf("Nhap chuoi = ");
    std::scanf("%[^\n]s", str);
}

void output(char freq[][100]) {
    for(int i = 99; i >= 0; --i)
        if (freq[i][0] != '\0') {
            printf("%d: %s\n", i, freq[i]);
        }
}