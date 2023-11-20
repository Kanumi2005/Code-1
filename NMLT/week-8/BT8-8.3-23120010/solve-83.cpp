#include "solve-83.h"
#include <cctype>
#include <cstdio>
#include <cstring>

void count_freq(char str[], char freq[][100]) {
    int arr[256] {};
    for (int i = 0; str[i] != '\0'; ++i)
        if (std::isprint(str[i]) && str[i] != ' ')
            ++arr[static_cast<int> (str[i])];
    for (int i = 0; i < 256; ++i)
        if (arr[i] != 0) {
            char temp[] = {static_cast<char> (i), ' '};
            std::strcat(freq[arr[i]], temp);
        }
}