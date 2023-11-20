#include "student.h"

float dtb(HocSinh &obj) {
    return (obj.dtb = (obj.diemtoan + obj.diemvan) / 2);
}