#include <stdio.h>

int getMax(int nb1, int nb2, int nb3)
{
  if (nb1 >= nb2 && nb1 >= nb3) {
    return nb1;
  }

  if (nb2 >= nb1 && nb2 >= nb3) {
    return nb2;
  }

  if (nb3 >= nb1 && nb3 >= nb2) {
    return nb3;
  }
}

int main(void)
{
  int result = getMax(5,6,7);
  printf("result = %d\n", result);
  return 0;
}
