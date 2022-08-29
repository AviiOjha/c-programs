//Program to print a string in reverse way(character-wise)
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
    //printf("Length of string is %d.", l);
    for(i=l-1;i>=0;i--)
    {
        printf("%c", a[i]);
    }
    return 0;
}