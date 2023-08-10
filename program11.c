//to check attendance criteria using if-else
#include<stdio.h>
int main()
{
    int total, attend;
    printf("enter total number of days:\n");
    scanf("%d", &total);
    printf("enter number of days attended:\n");
    scanf("%d", &attend);
    if(attend>=0.75*total)
    {
        printf("you have matched attendance criteria\n");
        if (attend==total)
        {
            printf("you have been full attendance\n");
            printf("you have maintained your attendance\n");
        }
    }
    else
    {
        printf("sorry you have not matched attendance criteria\n");
    }
    return 0;
}
     
        
