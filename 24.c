/* Accept length and breadth in meters; show area in feet */

#include<stdio.h>
#define CM_PER_INCH 2.54;
int main()
{
    float length,breadth,feet;
    printf("Enter length in meter: ");
    scanf("%f",&length);
      printf("Enter breadth in meter : ");
      scanf("%f",&breadth);
    feet = 3.2808399 * (length*breadth);
    printf("Area in feet : %f",feet);

    return 0;
}