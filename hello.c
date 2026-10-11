#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char chiffrer_caractere(char c, int decalage); 

int main(int argc, char *argv[]) {

  if (argc != 2){
    printf("Usage: ./caesar key");
    return 1;
  }

  for (int i = 0; argv[1][i] != '\0'; i++) {
      if (!isdigit(argv[1][i])){
      printf("Usage : ./caesar key");
      return 1;
    }
    }
  int k = atoi(argv[1]);
  
  int decalage = k;
  char message[100];
  printf("Entre un message en majuscule : \n");
  fgets(message, sizeof(message), stdin);

  for (int i = 0; message[i] != '\0'; i++) {
    message[i] = chiffrer_caractere(message[i], k);
 
  }

  printf("Le message chiffré est : %s", message);
  return 0;
}

char chiffrer_caractere(char c, int decalage) {
  if (c >= 'A' && c <= 'Z') {
      return (c - 'A' + decalage) % 26 + 'A';
    }
  else if (c >= 'a' && c <= 'z') {
      return (c - 'a' + decalage) % 26 + 'a';
    }
  return c;
}   
