#include "date.h"
#include "swap.h"

void swap (date &a, date &b) {
    date temp = a;
    a = b;
    b = temp;
}