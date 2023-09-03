// to check whter entered character is vowel or consonant
#include<stdio.h>
int main()
{
    char x;
    printf("enter character:\n");
    scanf("%c",&x);
    if ((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u'))
    {
        printf("this is vowle");
    }
    else
    {
        printf("this is consonat");
    }
    return 0;
}