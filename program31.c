// to search element in an array
#include<stdio.h>
int main()
{
    int n, i, j;
    printf("enter number of elements you want to enter in an array\n");
    scanf("%d", &n);
    int array[n];
    for (int i=0; i<n; i++)
    {
        printf("enter value in array%d\n",i);
        scanf("%d", &array[i]);
    }
    printf("enter element you want to search for: \n");
    scanf("%d", &j);
    int k=0;
    for (int i=0; i<n; i++)
    {
        if (array[n]==j)
        {
            k=1;
            break;
        }
    }
    if (k==1)
    {
        printf("your element has been found %d\n", j);
    }
    else
    {
        printf("your element has not been found\n");
    }
    return 0;
}