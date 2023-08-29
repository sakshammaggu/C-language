// to calculate diameter, circumference and area of circle using functions and recursion
#include<stdio.h>
float diameter(float radius)
{
    return (radius/2);
}
float circumference(float radius)
{
    return (2*3.14*radius);
}
float area(float radius)
{
    return (3.14*radius*radius);
}
int main()
{
    float r;
    printf("enter radius: \n");
    scanf("%f", &r);
    printf("diameter = %f\n", diameter(r));
    printf("ccircumference = %f\n", circumference(r));
    printf("area = %f\n", area(r));
    return 0;
}