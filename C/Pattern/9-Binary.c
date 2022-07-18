#include <stdio.h>
int main()
{
    int r;
    int sum;

    printf("Enter the number of ROW : ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum = i + j;
            if (sum % 2 == 0)
            {
                printf("1 ", sum);
            }
            else
            {
                printf("0 ", sum);
            }
        }
        printf("\n");
    }
    return 0;
}