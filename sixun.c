#include <stdio.h>
#include <stdlib.h>



int main(void){
  int nombre = 234;
  int *p = malloc(sizeof(nombre));
  

  if (p == NULL) {
    printf("Erreur d'allocation mémoire\n");
    return 1;
  }
  
  *p = nombre;

  printf("La valeur pointée est : %p", p);

  free(p);

  return 0;
}


