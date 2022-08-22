#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c, min;
    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // smallest no. b/w a,b & c is stored in min.
    if(a<b && a<c)
    {
        min=a;
    }
    else if (b<a && b<c)
    {
       min=b;
    }
    else
    {
        min=c;
    }

    while (1) {
        if (a%min == 0 && b%min == 0 && c%min==0)
        {
            printf("The HCF of %d,%d and %d is %d.",a, b, c , min);
            break;
        }
        --min;
    }
    return 0;
}
