#include "io-92.h"
#include "student.h"
#include "sort.h"
#include <cstdio>

void input(HocSinh hs[], int &n) {
    std::printf("Nhap so luong hoc sinh N = ");
    std::scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        std::printf("Nhap thong tin hoc sinh thu %d\n", i + 1);
        std::printf("Ho va ten = ");
        std::scanf(" %[^\n]s", hs[i].hoten);
        std::printf("Ngay sinh = ");
        std::scanf(" %[^\n]s", hs[i].ngaysinh);
        std::printf("Gioi tinh nam (1) / nu (0) = ");
        std::scanf("%d", &(hs[i].gioitinh));
        std::printf("Diem toan = ");
        std::scanf("%f", &(hs[i].diemtoan));
        std::printf("Diem van = ");
        std::scanf("%f", &(hs[i].diemvan));
        dtb(hs[i]);
    }
}

void output(HocSinh hs[], int n) {
    sort(hs, n);
    for (int i = 0; i < n && hs[i].dtb >= 8.0; ++i) {
        std::printf("%s co diem trung binh: %f\n", hs[i].hoten, hs[i].dtb);
    }
}