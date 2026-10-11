#include <stdio.h>

int main(void) {
  int nombre;
  printf("Quel est le nombre dont vous souhaitez connaitre la table de multiplication ?\n");
  scanf("%i", &nombre);
  for (int i = 1; i < 11; i++) {
    int mult = nombre * i;
    printf("%i * %i = %i\n", i, nombre, mult);
  }
  return 0;
}
