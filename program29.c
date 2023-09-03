// to input elements in array from user and count even and odd elements in array.
#include<stdio.h>
int main()
{
    int n, i;
    int j=0;
    int k=0;
    printf("enter number of values you want to add in array.\n");
    scanf("%d", &n);
    int array[n];
    for(int i=1; i<(n+1); i++)
    {
        printf("enter values in array %d\n", i);
        scanf("%d", &array[i]);
    }
    for (int i=1; i<(n+1); i++) 
    {
        if ((array[i])%2==0)
        {
            printf("this is even\n");
            j+=1; 
        }
        else
        {
            printf("this is odd\n");
            k+=1;
        }
    }
    printf("total number of even numbers are: %d\n", j);
    printf("total number of odd numbers are: %d\n", k);
    return 0;
}