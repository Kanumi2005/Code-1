#include "solve-82.h"
#include "check-sub-str.h"
#include <cstring>

void find(char dest[], char src[], int arr[], int &size) {
    size = 0;
    int kich_thuoc = std::strlen(src);
    for (int i = 0; dest[i] != '\0'; ++i)
        if ( is_sub_str(dest + i, src) ) {
            arr[size] = i;
            ++size;
            i += kich_thuoc - 1;
        }
}

void erase(char before[], char after[], int arr[], int size, int len) {
    for (int i = 0, j = 0, k = 0; before[i] != '\0'; ++i, ++j) {
        if (i == arr[k]) {
            after[j] = after[j + 1] = after[j + 2] = '#';
            ++k;
            j += 2;
            i += len - 1;
        }
        else after[j] = before[i];
    }    
}