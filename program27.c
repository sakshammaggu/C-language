// to insert elements and printing it after inputing by us
#include<stdio.h>
int main()
{
    int ch;
    int marks[4];
    marks[0]=23;
    marks[1]=45;
    marks[2]=62;
    marks[3]=72;
    printf("1. marks of student1\n");
    printf("2. marks of student2\n");
    printf("3. marks of student3\n");
    printf("4. marks of student4\n");
    printf("Enter number of that student which you want to see marks:\n");
    scanf("%d", &ch);
    if (ch==1)
    {
        printf("marks of student1 is %d", marks[0]);
    }
    else if (ch==2)
    {
        printf("marks of student2 is %d", marks[1]);
    }
    else if (ch==3)
    {
        printf("marks of student3 is %d", marks[2]);
    }
    else if (ch==4)
    {
        printf("marks of student4 is %d", marks[3]);
    }
    else
    {
        printf("pls enter number from 1-4 only\n");
    }
    return 0;
}