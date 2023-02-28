#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "../lib/lib.h"

int main() {
    int negIndex = 0;
    float y[7], neg[7];
    for (int k = 1; k <= 7; k++) {
        y[k] = function18(k);
        printf("%f\n", y[k]);

        if (y[k] < 0) {
            neg[negIndex] = y[k];
            negIndex++;
        }
    }

    printf("Масив сформований з негативних елеменів:\n");
    for (int i = 0; i < negIndex; i++) {
        printf("%f ", neg[i]);
    }

    return 0;
}