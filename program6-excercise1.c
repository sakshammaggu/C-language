//printing multiplication table for any entered number
#include<stdio.h>
int main()
{
    int a, i;
    printf("enter any number you want to show table: a\n");
    scanf("%d", &a);
    for (i=1; i<=10; ++i)
    {
        printf("%d*%d=%d\n", a, i, a*i);
    }
    return 0;
}