// inputting two numbers, add them and subtract them and 
//give those values to a and b respectively using call by refernce
#include<stdio.h>
int sum(int* x, int* y)
{
    return ((*x)+(*y));
}
int diff(int* x, int* y)
{
    return ((*x)-(*y));
}
int main()
{
    int a, b, c, d;
    printf("enter number 'a': \n");
    scanf("%d", &a);
    printf("enter number 'b': \n");
    scanf("%d", &b);
    printf("the sum of two numbers is %d \n", sum(&a,&b));
    printf("the difference of two numbers is %d \n", diff(&a,&b));
    c=sum(&a,&b);
    d=diff(&a,&b);
    printf("New 'a' and 'b' respectively are %d, %d \n", c, d);
    return 0;
}