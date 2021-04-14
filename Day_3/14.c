// 14 Write a program to accept the height of a person m and categorize the person according to their height.
// 0 to 100 category dwarf; 101 to 150 category short; 151 to 165 category medium; >165 tall

#include <stdio.h>
void main()
{
    float PerHeight;
 
    printf("Input the height of the person (in centimetres) :");
    scanf("%f", &PerHeight);
    if (PerHeight < 100.0)
        printf("The person is Dwarf. \n");
        else if ((PerHeight > 100.0) && (PerHeight <= 150.0))
        printf("The person is  short heighted. \n");
    else if ((PerHeight > 150.0) && (PerHeight <= 165.0))
        printf("The person is  medium heighted. \n");
    else if (PerHeight > 165.0)
        printf("The person is taller. \n");
    else
        printf("Abnormal height.\n");
}