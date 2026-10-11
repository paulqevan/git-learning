#include <stdio.h> 

int somme_chiffres(int entier);

int main(void) {
  int entier ;
  printf("Fournisser un entier :\n");
  scanf("%d", &entier);

  int resultat = somme_chiffres(entier);
  printf("La somme vaut %i", resultat);
  return 0;
}

int somme_chiffres(int entier) {
  int acc = 0 ;

  while(entier > 0) {
    acc +=  entier % 10;
    entier = entier / 10; 
  }
  return acc;
}
