//to check any number is even or odd
#include<stdio.h>
int main()
{
    int a;
    printf("enter any number:\n");
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("this number is even\n");
    }
    else
    {
        printf("this number is odd\n");
    }
    return 0;
}