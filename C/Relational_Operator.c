#include <stdio.h>
int main(void)
{
  int a;
  int b;

  printf("Enter a : \n");
  scanf("%d", &a);

  printf("Enter b : \n");
  scanf("%d", &b);

  //>
  _Bool a_is_greater = a > b;
  printf("A is greater than B - %d\n", a_is_greater);

  //<
  _Bool a_is_smaller = a < b;
  printf("A is smaller than B - %d\n", a_is_smaller);

  //==
  _Bool a_is_b = a == b;
  printf("A is B - %d\n", a_is_b);

  //
  _Bool a_is_not_b = a != b;
  printf("A is not B - %d\n", a_is_not_b);

  int c;
  int d;

  printf("Enter c : \n");
  scanf("%d", &c);

  printf("Enter d : \n");
  scanf("%d", &d);

  _Bool c_is_greater = c > d;
  printf("C is greater than D - %d\n", c_is_greater);

  //>=
  _Bool c_is_greater_equal = c >= d;
  printf("C is greater or equal to D - %d\n", c_is_greater_equal);

  //<=
  _Bool c_is_smaller_equal = c <= d;
  printf("C is smaller or equal to D - %d\n", c_is_smaller_equal);

  return 0;
}