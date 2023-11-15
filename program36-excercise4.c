// to print star triangular pattern and reversed triangular star pattern
// *           ****          
// **          ***        
// ***         **
// ****        *
#include<stdio.h>
int main()
{
    int ch, i, j, n;
    printf("enter number '0' fro triangular star pattern or '1' for reversed triangular star pattern:\n");
    scanf("%d", &ch);
    if (ch==0)
    {
        printf("triangular star patter will be displayed.\n");
        printf("enter number up to which you want to print stars:\n");
        scanf("%d", &n);
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<=i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (ch==1)
    {
        printf("reversed triangular star patter will be displayed.\n");
        printf("enter number up to which you want to print stars:\n");
        scanf("%d", &n);
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<=n-i-1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("no star pattern will be displayed as you ahve not chosen 0 or 1\n");
    }
    return 0;
}