#include <stdio.h>
int main()
{
  int N;
  printf("Enter the number - \n");
  scanf("%d", &N);

  if (N > 0)
  {
    printf("Your entered number is Positive.\n");

    if (N < 0)
    {
      printf("Your entered number is Negetive.\n");
    }

    else
    {
      printf("Your entered number is Nutral.\n");
    }
  }
}