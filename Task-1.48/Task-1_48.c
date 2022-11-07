//Напишите программу, распечатывающую максимальное и минимальное из ряда чисел, вводимых с клавиатуры.
#include <stdio.h>

int main (){
  int min, max, x, n, i;
  printf ("Введите кол-во чисел:");
  scanf ("%d", &n);
  if (n == 0) min = max = 0;
  printf ("Введите числа:\n");
  for (i = 0; i < n; i++){
    scanf ("%d", &x);
    if (x > max) max = x;
    if (x < min) min = x;
  }
  printf ("Был введён ряд из %d чисел, min = %d, max = %d\n", n, min, max);
  return 0;
}
    
