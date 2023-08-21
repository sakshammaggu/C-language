#include<stdio.h>
int main()
{
    char ch;
    printf("enter month:\n");
    scanf("%c", &ch);
    if ((ch=='januaury')||(ch=='march')||(ch=='may')||(ch=='july')||(ch=='august')||(ch=='october')||(ch=="december"))
    {
        printf("this months has 31 days\n");
    }
    else if((ch=='april')||(ch=='june')||(ch=='september')||(ch=='november'))
    {
        printf("this month has 30 days\n");
    }
    else if(ch=='february')
    {
        printf("this month has 28 days\n");
    }
    else
    {
        printf("pls enter month name\n");
    }
    return 0;
}