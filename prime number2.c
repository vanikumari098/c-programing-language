#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        if(n%1==0)
        count=count+1;
    }
        if(count==2)
        printf("%d is prime number ",n);
        else;
        printf("%d is not prime number",n);
    }
    
pr
