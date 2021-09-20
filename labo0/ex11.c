#include <stdio.h>

#define ARRAY_SIZE 5

void fillArray(int tableau[], int tabSize)
{
  for (int i = 0; i < tabSize; ++i) {
    printf("Veuillez insérer un entier : ");
    scanf("%d", &tableau[i]);
  } 
}

int main(void)
{
  int tableau[ARRAY_SIZE];
  fillArray(tableau, ARRAY_SIZE);

  for (int i = 0; i < ARRAY_SIZE; ++i) {
    printf("Résulat %d : %d\n", i, tableau[i]);
  }
  return 0;
}
