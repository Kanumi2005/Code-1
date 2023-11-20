#include "plane.h"
#include <cmath>
#include <cstdio>

float distance(point A, point B) {
    return std::sqrt((A.X - B.X) * (A.X - B.X) + (A.Y - B.Y) * (A.Y - B.Y));
}
point midpoint(point A, point B) {
    point M = {
        .X = (A.X + B.X) / 2,
        .Y = (A.Y + B.Y) / 2
    };
    return M;
}
point centroid(triangle ABC) {
    point G = {
        .X = (ABC.vertex[0].X + ABC.vertex[1].X + ABC.vertex[2].X) / 3,
        .Y = (ABC.vertex[0].Y + ABC.vertex[1].Y + ABC.vertex[2].Y) / 3 
    };
    return G;
}