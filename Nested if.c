#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        if (num % 2 == 0)
            printf("The number is even and positive");
        else
            printf("The number is odd and positive");
    }
    else if (num < 0)
    {
        if (num % 2 == 0)
            printf("The number is even and negative");
        else
            printf("The number is odd and negative");
    }
    else
    {
        printf("The number is 0");
    }

    return 0;
}
