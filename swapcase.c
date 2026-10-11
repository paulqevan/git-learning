#include <stdio.h>
#include <ctype.h>

int main(void) {
  char phrase[100];
  printf("Entre une phrase\n");
  fgets(phrase, sizeof(phrase),stdin);

  for (int i = 0; phrase[i] != '\0'; i++) {
    if (islower(phrase[i])) {
      phrase[i] = toupper(phrase[i]);
    }
    else {
        phrase[i] = tolower(phrase[i]);
      }
    }
  
  printf("%s", phrase);
  return 0;
}
