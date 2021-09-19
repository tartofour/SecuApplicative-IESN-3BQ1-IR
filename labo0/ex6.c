#include <stdio.h>

int mystrlen(char string[])
{
  int len = 0;

  while (*string != '\0') {
    len++;
    string++;
  }

  return len;
}

int main(void)
{
  char phrase[]  = "Bonjour à tous";
  int length = mystrlen(phrase);
  printf("length = %d\n", length);
  return 0;
}
