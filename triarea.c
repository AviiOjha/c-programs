//Program to find area of a triangle using function
#include <stdio.h>
#include <math.h>
void area();
void main()
{
    area();
}
void area()
{
    float a,b,c,s,area=0;
    printf("Enter three side of a triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
     area=sqrt(s*(s-a)*(s-b)*(s-c));
   //printf("%f\n", s); //Semi perimeter
   printf("Area of the triangle is:%f", area);
}