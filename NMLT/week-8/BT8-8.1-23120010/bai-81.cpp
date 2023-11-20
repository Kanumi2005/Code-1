#include <cstdio>

bool my_strcmp(const char lhs[], const char rhs[]) {
    for (int i = 0; lhs[i] != '\0' || rhs[i] != '\0'; ++i) {
        if (lhs[i] > rhs[i])
            return 1;
        if (lhs[i] < rhs[i])
            return -1;
    }
    return 0;
}

int my_strcspn(const char dest[], const char src[]) {
    int i = 0;
    for ( ; dest[i] != '\0'; ++i)
        for (int j = 0; src[j] != '\0'; ++j)
            if (dest[i] == src[j])
                return i;
    return i;
}

double my_atof(char str[]) {
    double f = 0.0;
    sscanf(str, "%lf", &f);
    return f;
}
