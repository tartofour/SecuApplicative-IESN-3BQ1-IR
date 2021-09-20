#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Erreur, nombre d'argument invalide.\n");
    return EXIT_FAILURE;
  }

  printf("Hello %s\n", argv[1]);
  return 0;
}
