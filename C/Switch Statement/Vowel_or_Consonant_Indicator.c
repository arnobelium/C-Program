#include <stdio.h>
int main()
{
  char latter;
  printf("Enter any Word - ");
  scanf("%c", &latter);

  switch (latter)
  {
  case 'a':
  case 'A':
  case 'e':
  case 'E':
  case 'i':
  case 'I':
  case 'o':
  case 'O':
  case 'u':
  case 'U':
    printf("Vowel", latter);
    break;

  default:
    printf("Consonant");
  }

  return 0;
}