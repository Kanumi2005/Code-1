#include "format.h"
#include <cctype>
#include <cstdio>

void trim_left(char str[], int &i) {
    for (; std::isspace(str[i]); ++i);
}

void one_space_and_trim_right(char str[], int &i) {
    bool is_space = std::isspace(str[i]);
    if (!is_space) {
        std::printf("%c", str[i]);
        ++i;
        return;
    }
    for (; std::isspace(str[i]); ++i);
    if (str[i] == '\0') return;
        std::printf(" ");
}
