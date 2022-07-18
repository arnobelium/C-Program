#include <stdio.h>
int main()
{
  int H, M, S;
  printf("Set the time : \n");
  scanf("%d%d%d", &H, &M, &S);

  if (H > 12 || M > 60 || S > 60)
  {
    printf("ERROR!!!\n");
    return (0);
  }

  while (1)
  {
    S++;
    if (S > 59)
    {
      M++;
      S = 0;
    }
    if (M > 59)
    {
      H++;
      M = 0;
    }
    if (H > 12)
    {
      H = 1;
    }
    printf("Clock : \n");
    printf("%02d:%02d:%02d\n", H, M, S);
  }
  return 0;
}