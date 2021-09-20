#include <stdio.h>

void displayNbCharOccurence(char s[], char c)
{
  int count = 0;

  while (*s != '\0'){ 
    if (*s == c) {count++;}
    s++;
  }

  printf("Nombre d'occurence(s) du caractère '%c' : %d\n", c, count);
}

int main(void)
{
  displayNbCharOccurence("Hello World", 'l');
  return 0;
}
