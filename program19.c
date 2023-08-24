//to check whether triangle is valid or not by entering angles
#include<stdio.h>
int main()
{
    int a, b, c, sum;
    printf("enter 1st angle:\n");
    scanf("%d", &a);
    printf("enter 2nd angle:\n");
    scanf("%d", &b);
    printf("enter 3rd angle:\n");
    scanf("%d", &c);
    if((a+b+c)==180)
    {
        printf("this triangle is valid\n");
    }
    else
    {
        printf("this triangle is not valid\n");
    }
    return 0;
}

