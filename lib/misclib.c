#include "lib.h"

#include <stdlib.h>
#include <math.h>

float distance(int aX, int aY, int bX, int bY) {
    float distance = sqrt(pow((bX - aX), 2) + pow((bY - aY), 2));
    return distance;
}

float factorial(float x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}