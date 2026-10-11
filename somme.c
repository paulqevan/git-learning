#include <stdio.h>

int main(void) {
  int nombre;
  int compteur = 0; 
  
  printf("Quel est votre entier");
  scanf("%d", &nombre);
  while (nombre > 0) {
    compteur += nombre % 10;
    nombre = nombre / 10;
  }
  printf("La somme des chiffres de votre nombre vaut %i", compteur);
  return(0);
}
