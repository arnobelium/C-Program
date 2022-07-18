#include <stdio.h>
#include <string.h>

int main()
{
  char input[100], reversed[100];
  printf("Input the string for palaindrome check \n");
  scanf("%s", &input);

  // Copy input string and reverse it
  strcpy(reversed, input);

  // reverse string
  strrev(reversed);

  // Compare reversed string with input string
  if (strcmp(input, reversed) == 0)
  {
    printf("%s is a palaindrome \n", input);
  }
  else
  {
    printf("%s is not a palaindrome \n", input);
  }

  return 0;
}