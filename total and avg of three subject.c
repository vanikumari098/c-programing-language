// Online C compiler to run C program online
#include <stdio.h>
void main()
{
    int a,b,c,total,avg;
    a=b=c=total=avg=0;
    printf("Enter three subject marks:");
    scanf("%d%d%d,&a,&b,&c");
    total=a+b+c;
    avg=(a+b+c)/3;
    printf("total is %d\n",total);
    printf("avg is %d\n",avg);
}
