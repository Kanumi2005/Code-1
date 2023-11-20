#ifndef PLANE_H
#define PLANE_H

struct point {
    float X, Y;
};

struct triangle {
    point vertex[3];
};

float distance(point A, point B);
point midpoint(point A, point B);
point centroid(triangle ABC);

#endif