#include "io-93.h"
#include "plane.h"
#include <cstdio>

void input(triangle &ABC) {
    std::printf("Nhap thong tin tam giac.\n");
    for (int i = 0; i < 3; ++i) {
        std::printf("Nhap toa do dinh thu %d\n", i + 1);
        std::printf("Hoanh do = ");
        std::scanf("%f", &(ABC.vertex[i].X));
        std::printf("Tung do = ");
        std::scanf("%f", &(ABC.vertex[i].Y));
    }
}

void output(triangle &ABC) {
    std::printf("Do dai 3 canh tam giac lan luot la %f, %f, %f\n", distance(ABC.vertex[0],\
        ABC.vertex[1]), distance(ABC.vertex[1], ABC.vertex[2]), \
        distance(ABC.vertex[2], ABC.vertex[0]));
    point midAB = midpoint(ABC.vertex[0], ABC.vertex[1]);
    point midBC = midpoint(ABC.vertex[1], ABC.vertex[2]);
    point midCA = midpoint(ABC.vertex[2], ABC.vertex[0]);
    std::printf("Toa do trung diem cac canh tam giac lan luot la (%f, %f), (%f, %f), (%f, %f)\n", \
        midAB.X, midAB.Y, midBC.X, midBC.Y, midCA.X, midCA.Y);
    point cenABC = centroid(ABC);
    std::printf("Toa do trong tam tam giac la (%f, %f)", cenABC.X, cenABC.Y);
}