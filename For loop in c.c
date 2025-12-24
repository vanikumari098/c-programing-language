#include <stdio.h>
int main()
{
    int num;
    printf("The natural numbers from 1 to 500:\n");

    for (num = 1; num <= 500; num++)
    {
        printf("%d ", num);
    }
    printf("\nLoop end");
    return 0;
}
