#include <stdio.h>

int main() {
    // Задано сталi величини
    const int a = 1;
    const int b = 10;
    const int c = -1;

    // Обчислення виразу
    double y = (double)(a + b * c) / (2 * a - b - c) + (double)a / (b + 2);

    // Виведення результату
    printf("Результат обчислення виразу y = (a + b * c) / (2a - b - c) + a / (b + 2):\n");
    printf("При a = %d, b = %d, c = %d, значення y = %.2f\n", a, b, c, y);

    return 0;
}
