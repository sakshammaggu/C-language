//using if else maintaning who got gift in respective subjects
#include<stdio.h>
int main()
{
    char subjects[50];
    printf("enter subjects:\n");
    scanf("%s", subjects);
    if (subjects=="maths and science")
    {
        printf("you have won gift of 45 Rs.\n");
    }
    else if(subjects=="maths")
    {
        printf("you have won gift of 15 Rs.\n");
    }
    else if(subjects=="science")
    {
        printf("you have won gift of 15 Rs.\n");
    }
    else
    {
        printf("Sorry you have not been alloted any gift as you have not passed in any of the two subjects.\n");
    }
     return 0;
}
