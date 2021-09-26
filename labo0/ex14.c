#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 2) {
    printf("Erreur : Ce programme prend un argument.\n");
    return 1;
  }

  size_t argLen = strlen(argv[1])+1;
  char *tableau = (char*) malloc(argLen);

  strcpy(tableau, argv[1]);
  printf("Contenu du tableau = %s\n", tableau);   
  printf("Adresse du tableau = %p\n", &tableau);
  printf("Taille du tableau = %d\n", strlen(tableau)+1);
  free(tableau);
  return 0;
}
