#include "check-sub-str.h"

bool is_sub_str(char dest[], char src[]) {
    for (int i = 0; src[i] != '\0'; ++i)
        if (dest[i] != src[i])
            return false;
    return true;
}