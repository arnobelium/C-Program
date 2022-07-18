#include <stdio.h>

int main(void)
{

  int a = 18;
  int b = 35;
  int age;

  printf("Enter your age = ");
  scanf("%d", &age);

  if (a <= age && age <= b)
  {
    printf("You're eligible for this job", age);
  }

  else
  {
    printf("You're not eligible for this job", age);
  }

  return 0;
}