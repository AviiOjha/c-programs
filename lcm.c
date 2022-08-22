#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c, max;
    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // smallest no. b/w a, b & c is stored in max.
    if(a>b && a>c)
    {
        max=a;
    }
    else if (b>a && b>c)
    {
       max=b;
    }
    else
    {
        max=c;
    }

    while (1) {
        if (max % a == 0 && max % b == 0 && max%c==0) {
            printf("The LCM of %d,%d and %d is %d.",a, b, c , max);
            break;
        }
        ++max;
    }
    return 0;
}
