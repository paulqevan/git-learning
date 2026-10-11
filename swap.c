#include <stdio.h>

void echanger(int *a, int *b);

int main(void){
  int a = 3;
  int b = 5;
  printf("Avant l'échange des variables, a = %i et b = %i\n", a, b);
  echanger(&a, &b);
  printf("Ensuite, a = %i et b = %i", a, b);
}

void echanger(int *a, int *b) {
  int temp = *a;
  *a = *b ;
  *b = temp ;
}
