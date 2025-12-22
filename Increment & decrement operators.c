#include <stdio.h>

int main()
{
    int n=10;
    printf("initial value is:%dn",n);
    n++;
    printf("after increment%d\n",n);
    n--;
    printf("after decrement%d\n",n);
    printf("preincrement is%d\n",++n);
    printf("predecrement is%d\n",++n);
    return 0;
}
