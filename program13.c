//to check divisibilty of any number by 5 and 11 both or individuallly
#include<stdio.h>
int main()
{
    int a;
    printf("enter any number:\n");
    scanf("%d", &a);
    if ((a%5==0)&&(a%11==0))
    {
        printf("this number is divisble by 5 and 11\n");
    }
    else if(a%5==0)
    {
        printf("this number is only divisble by 5\n");
    }
    else if(a%11==0)
    {
        printf("this number is only divisible by 11\n");
    }
    else
    {
        printf("this number is not divisible nether by 5 nor 11\n");
    }
    return 0;
}
