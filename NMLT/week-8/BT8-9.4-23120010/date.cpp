#include "date.h"
#include "swap.h"

bool is_future(date lhs, date rhs) {
    if (lhs.year > rhs.year)
        return true;
    if (lhs.year == rhs.year) {
        if (lhs.month > rhs.month)
            return true;
        if (lhs.month == rhs.month && lhs.day > rhs.day)
            return true;
    }
    return false;
}

void sort(date arr[], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j) {
            if (is_future(arr[i], arr[j]))
                swap(arr[i], arr[j]);
        } 
}

int day_in_month(date obj) {
    if (obj.month == 1 || obj.month == 3 || obj.month == 5 || obj.month == 7 ||
        obj.month == 8 || obj.month == 10 || obj.month == 12)
        return 31;
    else if (obj.month == 4 || obj.month == 6 || obj.month == 9 ||
             obj.month == 11)
        return 30;
    else if ( (obj.year % 4 != 0) || (obj.year % 100 == 0 && obj.year % 400 != 0))
        return 28;
    else
        return 29;
}

date yesterday(date obj) {
    if (obj.day == 1) {
        if (obj.month == 1) {
            obj.day = 31;
            obj.month = 12;
            --obj.year;
        } else {
            --obj.month;
            obj.day = day_in_month(obj);
        }
    }
    else
        --obj.day;
    return obj;
}
date tomorrow(date obj) {
    if (obj.day == day_in_month(obj)) {
        if (obj.month == 12) {
            obj.day = 1;
            obj.month = 1;
            ++obj.year;
        } else {
            obj.day = 1;
            ++obj.month;
        }
    }
    else 
        ++obj.day;
    return obj;
}