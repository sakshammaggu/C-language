//matching age and percentage criteria using if-else
#include<stdio.h>
int main()
{
    int age, percentage;
    printf("*************APPLICATION FORM 2022***************\n");
    printf("Enter age:\n");
    scanf("%d", &age);
    printf("Enter percentage:");
    scanf("%d", &percentage);
    if (age>16)
    {
        if (percentage>80)
        {
            printf("YOU ARE ELLIGIBLE TO APPLY AS YOU ARE MEETING BOTH AGE AND PERCENTAGE CRITERIA");
        }
        else
        {
            printf("YOU ARE NOT MEETING PERCENTAGE CRITERIA");
        }
    }
    else
    {
        printf("you are not meeting age criteria");
    }
    return 0;
}