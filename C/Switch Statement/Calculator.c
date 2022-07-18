#include <stdio.h>

int main()
{

  char O;
  double F, S;

  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &O);

  printf("Enter two operands: \n");
  scanf("%lf %lf", &F, &S);

  switch (O)
  {
  case '+':
    printf("%.2lf + %.2lf = %.2lf", F, S, F + S);
    break;
  case '-':
    printf("%.2lf - %.2lf = %.2lf", F, S, F - S);
    break;
  case '*':
    printf("%.2lf * %.2lf = %.2lf", F, S, F * S);
    break;
  case '/':
    printf("%.2lf / %.2lf = %.2lf", F, S, F / S);
    break;

  default:
    printf("Error! operator is not correct");
  }

  return 0;
}