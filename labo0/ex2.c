#include <stdio.h>

void display_division(float dividend, float divisor)
{
  float quotient = dividend / divisor;
  int remainder = (int) dividend % (int) divisor;
  
  printf("Résultat de la division réelle : %f\n", quotient);
  printf("Reste de la division entière = %d\n", remainder);
}

int main(void)
{
  display_division(15,4);
  return 0;
}
