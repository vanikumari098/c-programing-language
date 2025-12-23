#include <stdio.h>

int main()
{
    char name[50];
    int age;
    printf("enter your name:");
    scanf("%s",name);
    printf("enter your age:");
    scanf("%d",&age);
    printf("your name is%s\n",name);
    printf("your age is%d\n",age);
    return 0;
}
