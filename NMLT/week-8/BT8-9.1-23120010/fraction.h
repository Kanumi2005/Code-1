#ifndef FRACTION_H
#define FRACTION_H

struct frac {
    int numerator, denominator;
};

frac sum(frac lhs, frac rhs);
frac product(frac lhs, frac rhs);
frac reverse(frac obj);
frac shorten(frac obj);
void display(frac obj);

#endif