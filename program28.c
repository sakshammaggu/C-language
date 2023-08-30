// to input elements in array and print all negative elements.
#include<stdio.h>
int main()
{
    int n, i;
    printf("enter number upto which you want to add values in array\n");
    scanf("%d", &n);
    int array[n];
    for (int i=0; i<n; i++)
    {
        printf("enter values of array: %d\n", i);
        scanf("%d", &array[i]);
    }
    for (int i=0; i<n; i++) 
    {
        printf("value of %d element of array is %d\n", i, array[i]);
        if (array[i]<0)
        {
            printf("%d\n", array[i]);
        }
        else
        {
            printf("this doesn't include negative values in array\n");
        }
    }
    return 0;
}