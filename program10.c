//making an application from using if-else and switch
#include<stdio.h>
int main()
{
    int age, percentage;
    printf("enter age:\n");
    scanf("%d", &age);
    printf("enter percentage:\n");
    scanf("%d", &percentage);
    printf("************APPLICATION FORM 2022****************");
    if (age>16)
    {
        if (percentage>80)
        {
            printf("YOU ARE ELLIGIBLE TO APPLY AS YOU ARE MEETING BOTH AGE AND PERCENTAGE CRITERIA\n");
            if(percentage>90)
            {
                printf("CONGRATULATIONS YOU ARE IN TOP 50\n");
                switch (percentage)
                {
                    case 98:
                       printf("CONGRATULATIONS YOU ARE SCHOOL TOPPER\n");
                       printf("YOUR'S MARKS ARE GOOD\n");
                       break;
                    case 99:
                       printf("CONGRATULATIONS YOU ARE STATE TOPPER\n");
                       printf("YOUR'S MARKS ARE GOOD\n");
                       break;
                    case 100:
                       printf("CONGRATULATIONS YOU ARE ALL INDIA TOPPER\n");
                       printf("YOUR'S MARKS ARE GOOD\n");
                       break;                     
                    default:
                       printf("YOUR'S MARKS ARE GOOD\n");
                       break;
                }
            }   
        }
        else
        {
            printf("YOU ARE NOT MEETING PERCENTAGE CRITERIA\n");
        }
    }
    else
    {
        printf("you are not meeting age criteria");
    }
    return 0;
}
    