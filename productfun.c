//Program to find product of three nos using function
#include <stdio.h>
int product(int x,int y, int z);
void main()
{
    int a, b, c, p;
    printf("Enter three nos.");
    scanf("%d%d%d", &a,&b,&c);
    p=product(a,b,c);
    printf("The product is %d", p);
}
int product(int x,int y, int z)
{
    int p;
    p=x*y*z;
    return p;
}