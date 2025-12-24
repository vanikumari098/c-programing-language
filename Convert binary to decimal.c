#include <stdio.h>
#include <math.h>

int main()
{
    long int n;
    int i = 0, sum = 0, remainder;

    printf("Enter binary number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        remainder = n % 10;
        sum = sum + remainder * pow(2, i);
        n = n / 10;
        i++;
    }

    printf("Decimal number = %d", sum);
    return 0;
}
