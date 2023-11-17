// array reversal
#include<stdio.h>
void arrRev(int array[])
{
    int temp,n;
    for (int i=0; i<(n/2); i++)
    {
        
        temp=array[i];
        array[i]=array[(n-1)-i];
        array[(n-1)-i]=temp;
    }
}
int main()
{
    int n, i;
    printf("enter number of values which should be there in an array:\n");
    scanf("%d", &n);
    int array[n];
    printf("Before reversing array:\n");
    for (int i=0; i<n; i++)
    {
        printf("enter values in array: %d\n", i);
        scanf("%d", &array[i]);
    }
    for (int i=0; i<n; i++)
    {
        printf("the values in array at %d is %d\n", i, array[i]);
    }
    arrRev(array);
    printf("after reversing array:\n");
    for (int i=0; i<n; i++)
    {
        printf("the values in array at %d is %d\n", i, array[i]);
    }
    return 0;
}