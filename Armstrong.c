#include<stdio.h>
int main()
{
    int num,originalNum,remainder,result=0;
    printf("enter a three digit integer:");
    scanf("%d", &num);
    originalNum=num;
    while(originalNum!=0)
    {
        remainder=originalNum%10;
        result+=remainder*remainder*remainder;
        originalNum/=10;
    }
    int(result==num)
    printf("%d ia an armstrong number.",num);
    else
    printf("%d is not an armstrong number.",num);
    return 0;
}
