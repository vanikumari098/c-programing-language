#include <stdio.h>
int main()
{
    int x, y, max;
    printf("Enter any two numbers\n");
    scanf("%d %d", &x, &y);

 max = (x > y) ? x : y;
 printf("The maximum number is = %d", max);
 return 0;
}
