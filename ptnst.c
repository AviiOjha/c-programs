#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i>=j)
            {
            printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

/*Following is also true for reverse up to down.
#include <stdio.h>

int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=5;j++)
        {
            if(i>=j)
            {
            printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}*/