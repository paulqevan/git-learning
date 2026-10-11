#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char chiffrer_caractere(char c, int decalge);

int main(int argc, char *argv[]){
  if (argc != 2 ) {
    printf("Le nombre d'argument n'est pas bon.");
    return 1;
  }
  for (int i = 0; argv[1][i] != '\0'; i++) {
    if (!isdigit(argv[1][i])) {
      printf("Le décalage doit être un entier.");
      return 1;
    }
  }
  int k =  atoi(argv[1]);
  int decalage = k;
  char message[100];

  printf("Entrer un message à chiffer ;\n");
  fgets(message, sizeof(message), stdin);

  for (int i=0; message[i] != '\0'; i++ ) {
    message[i] = chiffrer_caractere(message[i], k);
    }
    printf("Le message chiffré est : \n%s", message);
    return 0;
  
}

char chiffrer_caractere(char c, int decalge) {
  if (c >= 'A' && c <= 'Z') {
    return (c - 'A' + decalge) % 26 + 'A';
  }
  else if (c >= 'a' && c <= 'z') {
      return (c - 'a' + decalge) % 26 + 'a';

    }
  return c;    
}
