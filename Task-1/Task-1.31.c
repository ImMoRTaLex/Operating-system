//Напишите программу, отгадывающую задуманное вами число в пределах от 1 до 200, пользуясь подсказкой с клавиатуры "=" (равно), "<" (меньше) и ">" (больше). 
#include <stdio.h>

int main(){
  int a, min, max;
  char b = 'n';
  min = 1;
  max = 200;
  a = (max + min) / 2;
  do{
    printf ("Загаданное число %d?\n", a);
    scanf ("%c", &b);
    if (b == '>'){
      min = a;
    }
      a = (max + min)/2;
    if (b == '<'){
      max = a;
      a = (max + min)/2;
    }
  }
  while (b != '=');
  printf ("Ура, победа!\n");
  return 0;
}
