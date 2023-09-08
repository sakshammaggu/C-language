//to create, initialize and demonstrate the use of pointers.
#include<stdio.h>
int main()
{
    int a;
    printf("enter element a :\n");
    scanf("%d", &a);
    int* ptr= &a;
    printf("the value of a is %d\n", a);
    printf("the value of address of a is: %d\n", ptr);
    return 0;
}