#include<stdio.h>
int main()
{
    int x,y,add,sub,mul,mod;
    float div;
    printf("enter the values:");
    scanf("%d%d",&x,&y);
    add=x+y;
    sub=x-y;
    mul=x*y;
    mod=x%y;
    div=x/y;
    printf("the adition is=%d\n",add);
    printf("the subtraction is=%dn",sub);
    printf("the multiplication is=%d\n",mul);
    printf("the modulus is=%d\n",mod);
    printf("the division is=%d\n",div);
    return 0;
}
