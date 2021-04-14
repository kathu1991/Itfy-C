/* Convert length in meters to feet and inches */

#include<stdio.h>
#define CM_PER_INCH 2.54;
int main()
{
    float m,f,i;
    printf("Type meter : ");
    scanf("%f",&m);
    f = 3.2808399 * m;
    printf("meter to feet is: %f",f);
    i=m*100/CM_PER_INCH;
  printf("\n meter to inch is: %f",i);
    return 0;
}