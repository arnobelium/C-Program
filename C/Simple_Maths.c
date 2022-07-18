#include <stdio.h>

int main()
{
  int a, b, c, d, e;
  a = 20;
  b = 30;
  c = 40;

  d = a + b + c;
  printf("a + b + c = %d\n", d);

  e = d / 3;
  printf("d / 3 = %d\n", e);

  int f, g;
  f = 50;
  g = 100;
  
  float h, i;
  h = 55.5;

  i = f + g + h;
  printf("f + g + h = %f", i);

  return 0;
}