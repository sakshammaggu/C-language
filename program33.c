//to add two number using pointers
#include<stdio.h>
int main()
{
    int a, b;
    printf("enter element a :\n");
    scanf("%d", &a);
    printf("enter element b :\n");
    scanf("%d", &b);
    int* ptr1= &a;
    int* ptr2= &b;
    printf("the value of a is %d\n", a);
    printf("the value of address of a is: %d\n", ptr1);
    printf("the value of a is %d\n", b);
    printf("the value of address of a is: %d\n", ptr2);
    printf("addition of two numbers:%d\n", ((*ptr1)+(*ptr2)));
    return 0;
}