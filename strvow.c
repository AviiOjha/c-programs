//Program to find the no. of vowels and consonants in any string
#include <stdio.h>

int main()
{
    char a[30];
    int i, v=0, b=0,l=0;
    printf("Enter any string: ");
    gets(a);
    for (i = 0; a[i]!='\0'; i++)
    {
        l=l+1;
    }
    printf("Length=%d", l);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='U'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O')
        {
            v=v+1;
        }
        else if(a[i]==' ')
        {
            b=b+1;
        }
    }
    printf("\nNo. of vowels= %d", v);
    printf("\nNo. of consonants= %d", l-(v+b));
    return 0;
}