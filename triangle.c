#include <stdio.h>

int main(void) {
  int hauteur;
  printf("Quelle est la hauteur de la figure ? (donnez un nombre entier) \n");
  scanf("%d", &hauteur);

  for (int k = 0; k < hauteur; k++) {
    for (int j = k; j < hauteur; j++) {
    printf("*");
    }
    printf("\n");
  }
  return 0;
}
