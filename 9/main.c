#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "../lib/lib.h"

int main() {
    int minYear;
    float y, min = 0, sum;
    for (int k = 1991; k <= 2001; k++) {
        y = 100 * function17(k);
        printf("%f\n", y);

        if (y < min) {
            min = y;
            minYear = k;
            sum += fabs(y);
        }
    }
    if (min < 0) {
        printf("Фірма мала найбільші збитки у %i році, вони становили %f\n", minYear, min);
    }
    else {
        printf("Фірма не мала збитків");
    }
    printf("Сума всіх збитків %f", sum);

    return 0;
}