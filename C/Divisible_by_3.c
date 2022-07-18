#include <stdio.h>
int main()
{
  int a;

  printf("Enter the Number = ");
  scanf("%d", &a);

  if ((a % 3 == 0) && (a % 5 == 0))
  {
    printf("FizzBuzz", a);
  }
  else if (a % 5 == 0)
  {
    printf("Buzz", a);
  }
  else if (a % 3 == 0)
  {
    printf("Fizz", a);
  }
  else
  {
    printf("Invalid Number");
  }
  return 0;
}