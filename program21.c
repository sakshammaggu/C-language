//to calculate profit or loss
#include<stdio.h>
int main()
{
    int cp, sp, p, l;
    printf("enter cp:\n");
    scanf("%d", &cp);
    printf("enter sp\n");
    scanf("%d", &sp);
    if (sp>cp)
    {
        p=sp-cp;
        printf("%d profit\n", p);
    }
    else
    {
        l=cp-sp;
        printf("%d loss\n", l);
    }
    return 0;
}