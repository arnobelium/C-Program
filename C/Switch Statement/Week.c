#include <stdio.h>
int main(void)
{
  char day;
  printf("Enter any number between 1 to 7 - ");
  scanf("%c", &day);

  switch (day)
  {
  case '1':
    printf("Saturday", day);
    break;

  case '2':
    printf("Sunday", day);
    break;

  case '3':
    printf("Monday", day);
    break;

  case '4':
    printf("Tuesday", day);
    break;

  case '5':
    printf("Wednesday", day);
    break;

  case '6':
    printf("Thursday", day);
    break;

  case '7':
    printf("Friday", day);
    break;

  default:
    printf("Invalid Input");
  }

  return 0;
}