//to do some basic unit and conversions
#include<stdio.h>
int main()
{
    int ch=0;
    float km, inches, cm, pound, miles, foot, kg, metres;
    printf("1. conversion of km to miles.\n");
    printf("2. conversion of inches to foot.\n");
    printf("3. conversion of cm to inches.\n");
    printf("4. conversion of pound to kg.\n");
    printf("5. conversion of inches to metres");
    printf("choose any one of the above options.\n");
    scanf("%d", &ch);
    if (ch==1)
    {
        printf("enter km:\n");
        scanf("%f", &km);
        miles=km/1.6;
        printf("%f km = %f miles", km, miles);
    }
    else if (ch==2)
    {
        printf("enter inches:\n");
        scanf("%f", &inches);
        foot=inches/12;
        printf("%f inches = %f foot", inches, foot);
    }
    else if (ch==3)
    {
        printf("enter cm:\n");
        scanf("%f", &cm);
        inches=cm/2.54;
        printf("%f cm = %f inches", cm, inches);
    }
    else if (ch==4)
    {
        printf("enter pound:\n");
        scanf("%f", &pound);
        kg=pound/2.205;
        printf("%f pound = %f kg", pound, kg);
    }
    else if (ch==5)
    {
        printf("enter inches:\n");
        scanf("%f", &inches);
        metres=inches/39,37;
        printf("%f inches = %f metres", inches, metres);
    }
    else
    {
        printf("choose only options from 1-5\n");
    }
    return 0;
}