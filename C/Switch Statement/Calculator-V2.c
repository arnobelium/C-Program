#include <stdio.h>

int main()
{

    float OP1, OP2;
    char OP;

    printf("Enter an Operator (+, -, *, /): ");
    scanf("%c", &OP);

    printf("Value of First Operand - ");
    scanf("%f", &OP1);

    printf("Value of Second Operand - ");
    scanf("%f", &OP2);

    printf("%.2f %c %.2f = ", OP1, OP, OP2);

    switch (OP)
    {
    case '+':
        printf("%.2f\n", OP1 + OP2);
        break;

    case '-':
        printf("%.2f\n", OP1 - OP2);
        break;

    case '*':
        printf("%.2f\n", OP1 * OP2);
        break;

    case '/':
        printf("%.2f\n", OP1 / OP2);
        break;

    default:
        printf("PLEASE ENTER VALID OPERATOR\n");
    }
    printf("Thanks for using Calculator \n");
    return 0;
}