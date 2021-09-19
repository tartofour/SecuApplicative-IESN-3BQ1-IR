#include <stdio.h>
#define SIZE 10


void displayMinMax(int numbers[], size_t length)
{
  int min = numbers[0];
  int max = numbers[0];

  for (int i = 1; i < length; i++) {
    if (numbers[i] < min) {
      min = numbers[i];
    }    
    else if (numbers[i] > max) {
      max = numbers[i];
    }
  }

  printf("min = %d\n", min);
  printf("max = %d\n", max);
}

int main(void)
{
  int numbers[SIZE] = {4,6,12,93,2,-5}; 
  displayMinMax(numbers, SIZE); 
  return 0;
}
