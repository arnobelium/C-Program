#include <stdio.h>
int main()
{
  int n = 0;
  int i = 1;

  printf("The number is Even: \n");
  while (n <= 10)
  {
    if (n % 2 == 0)
    {
      printf("%d\n", n);
    }
    n = ++n;
  }

  printf("The number is Odd: \n");
  while (i <= 10)
  {
    if (i % 2 == 1)
    {
      printf("%d\n", i);
    }
    i = ++i;
  }

  return 0;
}