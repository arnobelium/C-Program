#include <stdio.h>
int main()
{
    int r;

    printf("Enter the number of ROW : ");
    scanf("%d", &r);

    // Outer Loop
    for (int i = 1; i <= r; i++)
    {
        // Inner Loop
        for (int j = 1; j <= r - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}