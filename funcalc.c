//Program to make a calculator using function
#include <stdio.h>

void sum();
void difference();
void product();
void quotient();
void main()
{
    sum();
    difference();
    product();
    quotient();
}
float a,b,s=0,d=0,p=0,q=0;
//Function for addition
void sum()
{
    printf("Enter any two nos.");
    scanf("%d%d", &a,&b);
    s=a+b;
    printf("\nThe sum is: %d", s);
}
//Function for subtraction
void difference()
{
    printf("\nEnter any two nos.");
    scanf("%d%d", &a,&b);
    d=a-b;
    printf("\nThe difference is: %d", d);
}
//Function for multiplication
void product()
{
    printf("\nEnter any two nos.");
    scanf("%d%d", &a,&b);
    p=a*b;
    printf("\nThe product is: %d", p);
}
//Function for division
void quotient()
{
    printf("\nEnter any two nos.");
    scanf("%d%d", &a,&b);
    q=a/b;
    printf("\nThe quotient is: %d", q);
}