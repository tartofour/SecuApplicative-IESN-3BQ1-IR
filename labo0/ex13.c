#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE 20

int main(int argc, char *argv[])
{
  if (argc != 2) {
    printf("Erreur : Ce programme prend un argument.\n");
    return 1;
  }

  char tableau[ARRAY_SIZE];
  snprintf(tableau, ARRAY_SIZE, "%s", argv[1]);
  printf("Contenu du tableau = %s\n", tableau);   
  printf("Adresse du tableau = %p\n", &tableau);
  printf("Taille du tableau = %d\n", sizeof(tableau));
  return 0;
}
