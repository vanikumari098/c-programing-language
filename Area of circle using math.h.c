#include<stdio.h>
#include<math.h>
int main()
{
    float radius,area;
    printf("enter the radius of the circle:");
    scanf("%f",&radius);
    area=M_PI*radius*radius;
    printf("the area of the circle is %2f\n",area);
    return 0;
}
