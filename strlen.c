//Program to find the length of a string without using built-in function strlen()
#include <stdio.h>

int main()
{
    char a[30];
    int i, l=0;
    printf("Enter any string: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        l=l+1;
    }
    printf("Length of string is %d.", l);
    return 0;
}