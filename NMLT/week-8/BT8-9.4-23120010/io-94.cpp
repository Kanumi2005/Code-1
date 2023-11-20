#include "date.h"
#include "io-94.h"
#include <cstdio>

void input(date arr[], int &n) {
    std::printf("Nhap so ngay can nhap = ");
    std::scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        std::printf("Nhap ngay thu %d\n", i + 1);
        std::printf("Nhap ngay thang nam = ");
        std::scanf("%d %d %d", &(arr[i].day), &(arr[i].month), &(arr[i].year));
    }
}

void output(date arr[], int n) {
    sort(arr, n);
    std::printf("Danh sach ngay thang nam tu qua khu den tuong lai: \n");
    for (int i = 0; i < n; ++i)
        std::printf("Ngay %d thang %d nam %d\n", arr[i].day, arr[i].month, arr[i].year);
    std::printf("Ngay hom qua cua ngay %d thang %d nam %d: ", arr[0].day, arr[0].month, arr[0].year);
    date yes = yesterday(arr[0]);
    std::printf("ngay %d thang %d nam %d\n", yes.day, yes.month, yes.year);
    date tom = tomorrow(arr[n - 1]);
    std::printf("Ngay hom sau cua ngay %d thang %d nam %d: ", arr[n - 1].day, arr[n - 1].month, arr[n - 1].year);
    std::printf("ngay %d thang %d nam %d\n", tom.day, tom.month, tom.year);
}