//Program to comapare whether two strings are same or not
#include <stdio.h>
#include<string.h>
int main()
{
    char a[30], b[30];
    int i = 0, l;
    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);
    if (strlen(a) == strlen(b))
    {
        while (a[i] != '\0' && b[i] != '\0')
        {
            // l=1;
            if (a[i] == b[i])
            {
                i++;
                l = 0;
            }

            else
            {
                l = 1;
                // break;
            }
        }
        if (l == 0)
            printf("Strings are same.");
    }
        else
            printf("Strings are not same.");
    return 0;
}