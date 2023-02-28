#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "../lib/lib.h"

int main() {
    float x, a, b, c, d, e = 2.71828, i = 8, y;

    printf("Введите x, a, b, c, d в такой последовательности\n");
    scanf("%f", x, a, b, c, d); // тут добавить перед переменными & если на винде. Пример: scanf("%f", &x, &a, &b, &c, &d);

    if (fabs(x) < 10) {
        float fi = tan(x + a) - log(fabs(b + 7))/log(i);
        y = function10(fi);
    }
    else if (fabs(x) >= 10) {
        float omega = c * pow((pow(x, 2) + (d * pow(e, 1.3))), 1.0 / 5);
        y = function11(omega);
    }

    printf("y = %f", y);

    return 0;
}