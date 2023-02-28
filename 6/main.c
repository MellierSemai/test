#include <stdio.h>
#include <math.h>

#include "../lib/lib.h"

int main() {
    float x = 0, z;
    long y = 1;

    for (int k = 1; k <= 29; k++) {
        x += function13(k);
    }

    for (int k = 1; k <= 29; k++) {
        y *= function14(k); 
    }

    z = pow(x , 2) + (3 * y);

    printf("x = %f\ny = %li\nz = %f", x, y, z);

    return 0;
}
