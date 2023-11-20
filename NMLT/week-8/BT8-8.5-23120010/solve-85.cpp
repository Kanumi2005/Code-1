#include "solve-85.h"
#include <cstring>
#include <cstdio>
void split(char str[], const char &c, char word[][100], int &size) {
    size = 0;
    char temp[] = {c};
    int len = 0;
    for (int i = 0, j = 0; str[i] != '\0';) {
        len = std::strcspn(str + i, temp);
        if (len != 0) {
            std::strncpy(word[j], str + i, len);
            ++j;
            ++size;
        }
        i += len;
        len = std::strspn(str + i, temp);
        i += len;
    }
}