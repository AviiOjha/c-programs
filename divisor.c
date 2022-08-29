//Program to find divisor of any number
#include <stdio.h>

int main()
{
    int a,i=0;
    printf("Enter any integer: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
        printf("%d\n",i);
        }
    }
    return 0;
}