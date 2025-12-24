#include<stdio.h>
void main()
{
    int num;
    for(num=1;num<=50;num++)
{
    printf("%4d",num);
    if(num==25)
    {
        break;
    }
}
}
