#ifndef STUDENT_H
#define STUDENT_H

struct HocSinh {
    char hoten[50];
    char ngaysinh[11];
    int gioitinh;
    float diemvan, diemtoan;
    float dtb;
};

float dtb(HocSinh &obj);

#endif