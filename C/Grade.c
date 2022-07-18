#include <stdio.h>
int main()
{
    int marks;

    printf("Enter Your Marks : ");
    scanf("%d", &marks);

    if (marks >= 80)
    {
        printf("Your Grade is A+\n");
    }

    else if (marks >= 70)
    {
        printf("Your Grade is A\n");
    }

    else if (marks >= 60)
    {
        printf("Your Grade is A-\n");
    }

    else if (marks >= 50)
    {
        printf("Your Grade is B\n");
    }

    else if (marks >= 40)
    {
        printf("Your Grade is C\n");
    }

    else if (marks >= 33)
    {
        printf("Your Grade is F\n");
    }

    return 0;
}