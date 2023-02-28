#include <stdio.h>

int main() {
    int tableRows;
    float value, valueChange, stopka, liter, pipe;

    printf("Введіть кількість рядків таблиці, початкове значення та шаг змінення\n");
    scanf("%i %f %f", &tableRows, &value, &valueChange);

    printf("╔══════════════════════════╦════════════════════════╦══════════════════════════╗\n");
    for (int i = 0; i < tableRows; i++, value += valueChange) {
        stopka = value, liter = value * 0.0568, pipe = value * 0.00012;

        printf("║%18f стопок ║%16f літрів ║%19f пайпа ║\n", stopka, liter, pipe);
    }
    printf("╚══════════════════════════╩════════════════════════╩══════════════════════════╝\n");

    return 0;
}