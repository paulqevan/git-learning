#include <stdio.h>
#include <ctype.h>

int main(void) {

  char phrase[100];
  printf("Quelle est votre phrase ?");
  fgets(phrase, sizeof(phrase), stdin);

  int compteur = 0;
  for (int i = 0; phrase[i] != '\0'; i++) {
    char c = tolower(phrase[i]);
    if (c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u' ||c == 'y') {
      compteur += 1 ;
    }
  }
  printf("Il y a un total de %i voyelles", compteur);
  return 0 ;

}

