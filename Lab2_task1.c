#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    printf("Введіть перше число: ");
    scanf("%d", &a);
    printf("Введіть друге число: ");
    scanf("%d", &b);
    
    // Обчислення
    int suma = a + b;
    int tsila_chastyna = (int)floor((double)a / b);
    int potroienyi_dobutok = 3 * a * b;                  

    // Виведення
    printf("Сума: %d\n", suma);
    printf("Ціла частина від ділення: %d\n", tsila_chastyna);
    printf("Потроєний добуток: %d\n", potroienyi_dobutok);

    return 0;
}
