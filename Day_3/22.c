//22 Write a program to check whether a triangle can be formed by the given value for the angles.
#include <stdio.h>
void main()  
{  
    int anga, angb, angc, sum; //are three angles of a triangle  
 
    printf("Input three angles of triangle : ");  
    scanf("%d %d %d", &anga, &angb, &angc);  
  
    /* Calculate the sum of all angles of triangle */  
    sum = anga + angb + angc;   
  
    /* Check whether sum=180 then its a valid triangle otherwise not */  
    if(sum == 180)   
    {  
        printf("The triangle is valid.\n");  
    }  
    else  
    {  
        printf("The triangle is not valid.\n");  
    }  
 } 