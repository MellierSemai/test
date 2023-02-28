#include <stdio.h>
#include <math.h>

int main() {
    float old1 = 2100, old2 = 4500, new1, new2, p = 30;

    printf("Старі ціни %f, %f\n", old1, old2);
    printf("Підвищення ціни на %f відсотків\n", p);

    new1 = old1 + (old1 * (p / 100));
    new2 = old2 + (old2 * (p / 100));

    printf("Нові ціни %f, %f\n", new1, new2);

    return 0;
}