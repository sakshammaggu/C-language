//to input elements in an array and print array using pointers.
#include<stdio.h>
int main()
{
    int n, i;
    printf("enter number of elements to be entred in array:\n");
    scanf("%d", &n);
    int array[n];
    int* ptr=array;
    for (int i=1; i<(n+1); i++)
    {
        printf("enter value in array: %d\n", i);
        scanf("%d", ptr);
        ptr++;
    }
    ptr=array;
    for (int i=1; i<(n+1); i++)
    {
        printf("the values of in array at place %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}