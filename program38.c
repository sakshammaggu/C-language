// enter two strings and print them by concatening by saying that string 1 is the friend of other
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    gets(str1);
    printf("string1 is %s\n", str1);
    char str2[50];
    gets(str2);
    printf("string2 is %s\n", str2);
    printf("the concatenated string will be as followws:\n");
    printf("%s is the friend of %s\n", str1, str2);
    return 0;
}