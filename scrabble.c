#include <stdio.h>
#include <ctype.h>

int compute(char *mot);

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};


int main(void){

  char mot1[100];
  char mot2[100];

  printf("Quel est le mot du joueur 1 :\n");
    fgets(mot1, sizeof(mot1), stdin);

  printf("Quel est le mot du joueur 2 :\n");
    fgets(mot2, sizeof(mot2), stdin);



  int points1 = compute(mot1);
  int points2 = compute(mot2);

  if (points1 > points2) {
    printf("Le joueur 1 gagne avec %i points", points1);
  }
    else if (points2 > points1){
      printf("Le joueur 2 gagne avec %i points", points2);
    }
  else {
    printf("Il y a égalité avec %i points", points2);
  }
  return 0;
}

int compute(char *mot){
  int score = 0;
  for (int i = 0; mot[i] != '\0'; i++) {
    char c = toupper(mot[i]);
    if (c >= 'A' && c <= 'Z') {
      int idx = c - 'A';
      score += points[idx];
    }
  }
  return score; 
}

