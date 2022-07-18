#include <stdio.h>
int main()
{
    int r;
    int num = 1;

    printf("Enter the number of ROW : ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num = num + 1;
        }
        printf(" \n");
    }
    return 0;
}