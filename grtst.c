#include<stdio.h>
void main()
{
    int a,b,c;
    //Taking integers from user
    printf("Enter the first integer:");
    scanf("%d", &a);
    printf("Enter the second integer:");
    scanf("%d", &b);
    printf("Enter the third integer:");
    scanf("%d", &c);
    //Finding greatest integer using if-else
    if(a>b && a>c)
    {
        printf("Greatest integer is %d", a);
    }
    else if (b>a && b>c)
    {
        printf("Gretest integer is %d", b);
    }
    else
    {
        printf("Greatest integer is %d", c);
    }
}