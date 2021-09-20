#include <stdio.h>

int main(int argc, char *argv[])
{
  int c;

  if (argc != 2) {
    printf("Erreur, ce programme prend un argument.\n");
    return 1;
  }

  FILE *filePtr = fopen(argv[1], "r");

  if (filePtr == NULL) {
    printf("Erreur, impossible d'ouvrir le fichier sélectionné.\n");
    return 1;
  }

  while((c = fgetc(filePtr)) != EOF){
    printf("%c", c);
  }

  fclose(filePtr);
  return 0;
}
