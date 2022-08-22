#include <stdio.h>

int main()
{
    int a,i,f=1;
    do
    {
        f=a*i;
        printf("%d",f);
        i++;
    }
    while(i<=a);
    return 0;
}