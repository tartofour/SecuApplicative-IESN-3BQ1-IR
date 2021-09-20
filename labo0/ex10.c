#include <stdio.h>

int switchValues(int *nb1, int *nb2)
{
  int buffer = *nb1;
  *nb1 = *nb2;
  *nb2 = buffer;
  return 0;
}

int main(void)
{
  int nb1 = 5;
  int nb2 = 1;

  printf("nb1 = %d\n", nb1);
  printf("nb2 = %d\n", nb2);

  switchValues(&nb1, &nb2);

  printf("nb1 = %d\n", nb1);
  printf("nb2 = %d\n", nb2);

  return 0;
}
