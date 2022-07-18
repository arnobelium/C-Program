#include <stdio.h>
int main()
{
    float C, F;

    printf("Enter your Celsius value: ");
    scanf("%f", &C);

    F = (C * 9 / 5) + 32;
    printf("Your Celsius to Fahrenheit value: %.2f\n", F);

    C = (F - 32) * 5 / 9;
    printf("Your Fahrenheit to Celsius value: %.2f", C);

    return 0;
}