#include <stdio.h>

int main()
{
    int a,i=1,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(i<=10)
    {
        a=i*num;
        printf("%d\n", a);
        i++;
    }
    return 0;
}