#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "../lib/lib.h"

int main() {
    int i = 8, negative = 0, positive = 0;
    float h = 0.1 * i;

    printf("╔════════════╦════════════╗\n");

    for (float arg = 0; arg < i; arg += h) {

        printf("║ %10f ║ %10f ║\n", arg, function16(arg));

        if (function16(arg) < 0) {
            negative++;
        }
        else if (function16(arg) > 0) {
            positive++;
        }
    }

    printf("╠════════════╩════════════╣\n");
    printf("║ Негативних %12i ║\n", negative);
    printf("║ Позитивних %12i ║\n", positive);
    printf("╚═════════════════════════╝\n");

    return 0;
}