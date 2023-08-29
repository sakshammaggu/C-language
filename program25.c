// to find cube of number using function and recursion
#include<stdio.h>
int cube(int number)
{
    return (number*number*number);
}
int main()
{
    int num;
    printf("enter number of which you want to find cube:\n");
    scanf("%d", &num);
    printf("cube of the number %d is %d\n", num, cube(num));
    return 0;
}