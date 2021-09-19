#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float displayDiskArea(float r)
{
  float area = M_PI * pow(r,2);
  printf("Aire du disque = %f\n", area);
}

int main(void)
{
  displayDiskArea(5);
  return 0;
}
