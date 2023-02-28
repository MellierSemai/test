#include <stdio.h>
#include <math.h>

#include "../lib/lib.h"

int main() {
    int aX = 0, aY = 0, bX = 22, bY = 21, cX = -22, cY = 23;

    float halfPerimeter = (distance(aX, aY, bX, bY) + distance(bX, bY, cX, cY) + distance(cX, cY, aX, aY)) / 2;
    float mediane = 0.5 * sqrt(2 * pow(distance(aX, aY, bX, bY), 2) + 2 * pow(distance(bX, bY, cX, cY), 2) - pow(distance(cX, cY, aX, aY), 2));
    float height = sqrt(halfPerimeter * (halfPerimeter - distance(cX, cY, aX, aY)) * (halfPerimeter - distance(aX, aY, bX, bY)) * (halfPerimeter - distance(bX, bY, cX, cY))) / distance(bX, bY, cX, cY);

    printf("Виcота трикутника %f\n", height);
    printf("Медіана трикутника %f\n", mediane);

    return 0;
}