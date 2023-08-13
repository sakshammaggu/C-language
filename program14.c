// to check whether entred alphabet is vowel or consonant
#include<stdio.h>
int main()
{
    char x;
    printf("enter any alphabet\n");
    scanf("%c", &x);
    if ((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u'))
    {
        printf("this is a vowel\n");
    }
    else
    {
        printf("this is a consonant\n");
    }
    return 0;
}