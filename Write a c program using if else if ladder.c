#include<stdio.h>
int main()
{
    int num;
    num=0;
    printf("enter a integer number:");
    scanf("%d",&num);
    if( num<0)
    {
        printf("the number is negative number");
    }
    else if(num>0)
    {
        printf("the number is positive number");
    }
    else
    {
        printf("the number is 0");
    }
    return 0;
}
