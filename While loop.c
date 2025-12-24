#include <stdio.h>
int main()
{
    int end, i = 7;

    printf("Enter the ending: ");
    scanf("%d", &end);

    printf("The multiples of 7 are:");
    while (i <= end)
    {
        printf("%4d", i);
        i = i + 7;
    }
    printf("\nLoop ends");
    return 0;
}
