#include<stdio.h>
int main()
{
    int age=0;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=28)
    {
        printf("person is eligible for vote");
    }
    else 
    {
        printf("you are not eligible for vote");
    }
}
    
