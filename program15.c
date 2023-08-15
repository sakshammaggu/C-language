// to differntiate an integer as positive, negative or 0
#include<stdio.h>
int main()
{
    int a;
    printf("enter any integer\n");
    scanf("%d", &a);
    if (a>0)
    {
        printf("this is a positive integer\n");
    }
    else if(a<0)
    {
        printf("this is a negative integer\n");
    }
    else
    {
        printf("this number is 0\n");
    }
    return 0;
}