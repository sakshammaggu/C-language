//swappig two numbers using pointers
#include<stdio.h>
int main()
{
    int a, b;
    printf("enter tens digit of two digit number:\n");
    scanf("%d", &a);
    printf("enter ones digit of two digit number:\n");
    scanf("%d", &b);
    int* ptr1=&a;
    int* ptr2=&b;
    printf("the two digit number formed is: %d%d\n", *ptr1,*ptr2);
    int * temp;
    temp=ptr1;
    ptr1=ptr2;
    ptr2=temp;
    printf("number after swaping digits is: %d%d\n", *ptr1,*ptr2);
    return 0;
}