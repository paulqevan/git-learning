#include <stdio.h>

void doubler_tableau(int *tableau, int taille);

int main(void){
  int tableau[] = {2, 4, 6};
  int taille = 3;
  for (int k = 0; k < taille; k++){
    printf("Avant %i", tableau[k]);

  }
    doubler_tableau(tableau, taille);
  for (int k = 0; k < taille; k++){
    printf("Après %i", tableau[k]);

}
}

void doubler_tableau(int *tableau, int taille) {
  for (int i = 0; i < taille; i++) {
    tableau[i] *= 2 ;
  }
}
