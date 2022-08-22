#include<stdio.h>
void main()
{
    int a=5;
    int b=10;
    printf("a is %d and b is %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("new a is %d and new b is %d",a,b);
}