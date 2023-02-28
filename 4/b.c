#include <stdio.h>

int main() {
    int num;
    printf("Введіть номер місяця\n");
    scanf("%i", &num);
    if (num == 12 || num == 1 || num == 2) {
        printf("Зима\n");
    }
    else if (num == 3 || num == 4 || num == 5) {
        printf("Весна\n");
    }
    else if (num == 6 || num == 7 || num == 8) {
        printf("Літо\n");
    }
    else if (num == 9 || num == 10 || num == 11) {
        printf("Осінь\n");
    }
    else {
        printf("Такого місяця не існує\n");
    }

    return 0;
}