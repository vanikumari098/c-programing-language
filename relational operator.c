#include<stdio.h>
int main()
{
    int x,y,a,b,c,d,e,f;
    printf("enter the values:");
    scanf("%d%d",&x,&y);
    a=x<y;
    b=x<=y;
    c=x>y;
    d=x>=y;
    e=x==y;
    f=x!=y;
    printf("the answer of relational operators %d\n%d\n%d\n%d\n%d\n%d\n%",a,b,c,d,e,f);
    return 0;
}
