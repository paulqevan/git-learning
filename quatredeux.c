#include <stdio.h>

void increment_all(int *tab, int taille);

int main(void) {
  int tab[] = {1, 2, 3, 4, 5};
  int taille = 5;
  increment_all(tab, taille);
  
  for (int i = 0; i < taille; i++) {
    printf("%d ", tab[i]);
  }
  printf("\n");

}

void increment_all(int *tab, int taille) {
  for (int i = 0; i < taille; i++) {
    *(tab + i) += 1;
  }
}
