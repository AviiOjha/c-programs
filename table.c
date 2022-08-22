#include <stdio.h>

int main()
{
    int a,i,num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=1;i<=10;i++)
    {
        a=i*num;
        printf("%d\n",a);
    }
    return 0;
}