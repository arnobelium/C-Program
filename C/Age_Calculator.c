#include <stdio.h>
int main()
{
  int Year, Month, Day;

  int Y, M, D;
  printf("Enter your Birth (Year, Month, Day) : \n");
  scanf("%d%d%d", &Y, &M, &D);

  int y, m, d;
  printf("Enter Present (Year, Month, Day) : \n");
  scanf("%d%d%d", &y, &m, &d);

  if (Y < y && M < 12 && m < 13 && D < 32 && m < 32)
  {
    Year = (y - Y);
    Month = (m - M);
    Day = (d - D);
    printf("(Year, Month, Day) : %d%d%d", Year, Month, Day);
  }
  else
  {
    printf("You do not exist");
  }

  return 0;
}