#include "sort.h"
#include "student.h"
void sort(HocSinh hs[], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (hs[i].dtb < hs[j].dtb) {
                HocSinh temp = hs[i];
                hs[i] = hs[j];
                hs[j] = temp;
            }
}