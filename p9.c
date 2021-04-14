#include <stdio.h>

int max(int *p1, int *p2)
{

    if (*p1 > *p2)
    {
        printf("max of %d ,%d is %d", *p1, *p2, *p1);
    }
    else
    {
        printf("max of %d ,%d is %d", *p1, *p2, *p2);
    }

    return 0;
}
int main()
{
    int *p1, *p2;
    int a = 40;
    int b = 20;
    p1 = &a;
    p2 = &b;
    max(p1, p2);
    return 0;
}