#include<stdio.h>
#define PI 3.14159
int main()
{
    float radius,area;
    printf("enter the radius of the circle:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("the area of the circle is %2f\n",area);
    return 0;
}
