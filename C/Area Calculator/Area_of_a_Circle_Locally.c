#include <stdio.h>
int main(void)

{
  float pai, r;
  pai = 3.1416;

  printf("Circle Radious r = ");
  scanf("%f", &r);

  printf("Area of the Circle is = %f\n", pai * r * r);

  printf("Perimeter of the Circle = %f", 2 * pai * r);

  return 0;
}