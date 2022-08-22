#include <stdio.h>

int main()
{
    enum week{sun,mon=5,tue,wed,thu=2,fri};
    enum week day;
    day=fri;
    printf("%d",day);
    return 0;
}