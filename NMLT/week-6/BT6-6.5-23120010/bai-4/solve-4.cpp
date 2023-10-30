#include "solve-4.h"

void solve_4(int before, int after, int &cost) {
    cost = 0;
    int consumption = after - before;
    if (consumption > 400) {
        cost += (consumption - 400) * 2701;
        consumption = 400;
    }

    if (consumption > 300) {
        cost += (consumption - 300) * 2615;
        consumption = 300;
    }

    if (consumption > 200) {
        cost += (consumption - 200) * 2340;
        consumption = 200;
    }

    if (consumption > 150) {
        cost += (consumption - 150) * 1858;
        consumption = 150;
    }

    if (consumption > 100) {
        cost += (consumption - 100) * 1600;
        consumption = 100;
    }

    cost += consumption * 1549;
}