
#include <stdio.h>

int main()
{
    int *p1;
    char *p2;
    double *p3;
    int a = 0;

    printf("\nvalue of a  before increment is: %d", a);
    printf("\nvalue of p1  before increment is: %d", p1);
    printf("\nvalue of p2  before increment is: %d", p2);
    printf("\nvalue of p3  before increment is: %d", p3);

    a++;
    p1++;
    p2++;
    p3++;
    printf("\nvalue of a  after increment is: %d", a);
    printf("\nvalue of p1  after increment is: %d", p1);
    printf("\nvalue of p2  after increment is: %d", p2);
    printf("\nvalue of p3  after increment is: %d", p3);

    printf("\n address of p1  is: %x", &p1);
    printf("\n address of p2  is: %x", &p2);
    printf("\n address of p3  is: %x", &p3);

    printf("\n points to %d", *p1);
    printf("\n points to %c", *p2);
    printf("\n points to %f", *p3);

    return 0;
}