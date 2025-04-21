#include <stdio.h>
#include <math.h>

int main() {
  int x, y, z;
  double a;

  // Введення даних
  printf("Введіть значення x: ");
  scanf("%d", &x);

  printf("Введіть значення y: ");
  scanf("%d", &y);

  printf("Введіть значення z: ");
  scanf("%d", &z);

  // Обчислення значення функції
  a = (double)(pow(x, 2) + 2 * x * z - pow(y, 2)) / sqrt(2 * x - x * x * y);

  // Виведення результату, якщо знаменник від'ємний, програма виведе NaN (Not a Number)
  printf("Результат обчислення: a = %.2f\n", a);

  return 0;
}