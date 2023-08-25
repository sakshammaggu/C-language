// to calculate percentage and giving respective grades
#include<stdio.h>
int main()
{
    float p, c, m, cs, percentage;
    printf("enter marks in phy\n");
    scanf("%f", &p);
    printf("enter marks in chem\n");
    scanf("%f", &c);
    printf("enter marks in maths\n");
    scanf("%f", &m);
    printf("enter marks in cs\n");
    scanf("%f", &cs);
    percentage=((p*c*m*cs)/400);
    if (percentage>=90.0)
    {
        printf(" You Have Got Grade A\n");
    }
    else if(percentage>=80.0)
    {
        printf("You have got grade B\n");
    }
    else if(percentage>=70)
    {
        printf("You have got grade C\n");
    }
    else if(percentage>=60)
    {
        printf("You have got grade D\n");
    }
    else if(percentage>=40)
    {
        printf("you have got grade E\n");
    }
    else if(percentage<40)
    {
        printf("You have gor grade F\n");
    }
    return 0;
}