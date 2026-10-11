#include <stdio.h>

void swap(int *a, int *b);

int main(void){
  int x = 3;
  int y = 7;
  printf("Avant swap, x = %i et y = %i", x, y);
  swap(&x, &y);
  printf("Après swap, x = %i et y = %i", x, y);
  return 0;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
