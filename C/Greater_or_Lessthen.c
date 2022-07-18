#include <stdio.h>
int main()
{
  int a;
  int b;

  printf("Enter a : ");
  scanf("%f", &a);

  printf("Enter b : ");
  scanf("%f", &b);

  if (a == b)
  {
    printf("Numbers are Equal");
  }
  else if (a > b)
  {
    printf("a>b");
  }
  else
  {
    printf("a<b");
  }
  return 0;
}