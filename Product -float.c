#include <stdio.h>
float multiply(float a, float b)
{
return a * b;
}
int main()
{
    float num1, num2, product;
    printf("enter two numbers:");
    scanf("%f %f", &num1, &num2);
    product = multiply(num1,num2);
    printf("product: %.2f", product);
    return 0;
    }
