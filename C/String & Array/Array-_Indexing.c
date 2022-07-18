#include <stdio.h>
int main()
{
  int N[10];

  N[0] = 10;
  N[1] = 15;
  N[2] = 20;
  N[3] = 25;
  N[4] = 30;
  N[5] = 35;
  N[6] = 40;
  N[7] = 45;
  N[8] = 50;
  N[9] = 55;

  printf("%d\n", N[3]);
  printf("%d\n", N[3 * 3]);

  return 0;
}