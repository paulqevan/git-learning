#include <stdio.h>

int main(void) {
  int x = 42 ;
  int *p = &x;
  printf("Avant modification, l'entier vaut %i et il est situé à la position %p/n", x, p);
  *p = 100;
  printf("Ensuite, la valeur est modifiée et vaut %i, elle est située à la postion %p", x, p);
  return 0;
}
