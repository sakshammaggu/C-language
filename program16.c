//to find maximum between two numbers
#include<stdio.h>
int main()
{
    int x, y;
    printf("enter integer x\n");
    scanf("%d", &x);
    printf("enter integer y\n");
    scanf("%d", &y);
    if (x>y)
    {
        printf("%dgreatest number is: \n",x);
    }
    else
    {
        printf("%dgreatest numebr is: \n",y);
    }
    return 0;
}