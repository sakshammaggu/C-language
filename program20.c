//to check whether triangle is equliateral or isoceles or scalene 
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter side 1\n");
    scanf("%d", &a);
    printf("enter side 2\n");
    scanf("%d", &b);
    printf("enter side 3\n");
    scanf("%d", &c);
    if ((a==b)&&(b==c)&&(a==c))
    {
        printf("this is equilateral triangle\n");
    }
    else if((a==b)||(b==c)||(c==a))
    {
        printf("this is a isoceles triangle\n");
    }
    else
    {
        printf("this is a scalene triangle\n");
    }
    return 0;
}