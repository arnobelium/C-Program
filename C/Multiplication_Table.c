#include <stdio.h>
int main()
{
  int num, r;
  printf("Enter the Number: ");
  scanf("%d", &num);
  for (r = 1; r <= 10; r++)
  {
    printf("%d * %d = %d \n", num, r, num * r);
  }
  return 0;
}