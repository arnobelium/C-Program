#include <stdio.h>
int main()
{
    int r;

    printf("Enter the number of ROW : ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= (r - i + 1); j++)
        {
            printf("%d ", j);
        }
        printf(" \n");
    }
    return 0;
}