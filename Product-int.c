#include <stdio.h>
int main()
{
    int num1, num2, product;
    printf("enter two integers:");
    scanf("%d %d", &num1, &num2);
    product = num1 * num2;
    printf("product: %d", product);
    return 0;
}
