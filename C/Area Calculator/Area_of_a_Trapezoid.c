#include <stdio.h>
int main(void)
{
    float a, b, h;

    printf("Enter the Base 1: ");
    scanf("%f", &a);

    printf("Enter the Base 2: ");
    scanf("%f", &b);

    printf("Enter the Hight: ");

    scanf("%f", &h);

    printf("Area of the trapezoid: %.2f", ((a + b) / 2) * h);

    return 0;
}