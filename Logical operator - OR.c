#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter any 3 values: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b || a > c)
    {
        printf("a is biggest");
    }
    else if (b > a || b > c)
    {
        printf("b is biggest");
    }
    else
    {
        printf("c is biggest");
    }
    return 0;
}
