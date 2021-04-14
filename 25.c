/* Accept length and breadth in meters; show area in meter */

#include<stdio.h>
#define CM_PER_INCH 2.54;
int main()
{
    float length,breadth,meter;
    printf("Enter length in feet: ");
    scanf("%f",&length);
      printf("Enter breadth in feet : ");
      scanf("%f",&breadth);
    meter = (length*breadth)/ 3.2808399 ;
    printf("Area in meter : %f",meter);

    return 0;
}