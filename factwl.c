#include <stdio.h>

int main()
{
    int a,i=1,f=1;
    printf("Enter a no.: ");
    scanf("%d", &a);
    while(i<=a)
    {
        f=f*i;
        i++;
    }
    printf("%d",f);
    return 0;
}