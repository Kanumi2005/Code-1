#ifndef DATE_H
#define DATE_H

struct date {
    int day, month, year;
};

void sort(date arr[], int n);
date yesterday(date obj);
date tomorrow(date obj);
int day_in_month(date obj);
bool is_past(date lhs, date rhs);
#endif