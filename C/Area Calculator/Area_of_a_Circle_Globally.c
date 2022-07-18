#include <stdio.h>
float pai = 3.1416;
int main(void)

{
  float r;
  printf("Circle Radious r = ");
  scanf("%f", &r);

  printf("Area of the Circle is = %f\n", pai * r * r);

  printf("Perimeter of the Circle = %f", 2 * pai * r);

  return 0;
}