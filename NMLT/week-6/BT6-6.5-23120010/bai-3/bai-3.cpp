#include "bai-3.h"
#include "io-3.h"
#include "solve-3.h"
void bai_3() {
    double a, b, c;
    input_3(a, b, c);
    output_3( is_triangle(a, b, c), is_right(a, b , c), is_isosceles(a, b, c), is_equilateral(a, b, c) );
}