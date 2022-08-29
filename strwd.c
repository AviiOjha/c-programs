//Program to find the no. of words and blank spaces in any string
#include <stdio.h>

int main()
{
    char a[30];
    int i, w=0, b;
    printf("Enter any string: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            b=b+1;
        }
    }
    printf("No. of blank spaces= %d", b);
    printf("\nNo. of words= %d", b+1);
    return 0;
}