#include <stdio.h>
void main()
{
    int s;
    printf("Enter the basic salary:");
    scanf("%d", &s);
    int d= .4*s, h= .2*s;
    printf("Gross salary of Ramesh is %d", s+d+h);
}