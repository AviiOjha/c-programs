#include <stdio.h>

int main()
{
    int a,b;
    char c;
    printf("What operation do you wanna perform?(+,-,*,/,r)");
    scanf("%c",&c);
    printf("Enter first no.:");
    scanf("%d", &a);
    printf("Enter second no.:");
    scanf("%d", &b);
    
    switch (c)
    {
    case '+':
        a=a+b;
        printf("Sum of a and b=%d",a);
        break;
    case '-':
        a=a-b;
        printf("Difference of a and b=%d",a);
        break;
    case '*':
        a=a*b;
        printf("Multiplication of a and b=%d",a);
        break;
    case '/':
        a=a/b;
        printf("Quotient of a and b=%d",a);
        break;
    case 'r':
        a=a%b;
        printf("Remainder on dividing a and b=%d",a);
        break;
    default:
        printf("Please enter the correct operator.");
    }
    return 0;
}