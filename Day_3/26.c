//26
/*
Write a program  to accept a grade and declare the equivalent description : 
Grade
Description
E
Excellent
V
Very Good
G
Good
A
Average
F
Fail
*/

#include <stdio.h>
#include <ctype.h> 
#include <string.h> 

void main()
{
    char notes[15];
    char grd;
 
    printf("Input the grade :");
    scanf("%c", &grd);

    grd = toupper(grd);
    switch(grd)
    {
    case 'E':
        strcpy(notes, " Excellent");
        break;
    case 'V':
        strcpy(notes, " Very Good");
        break;
    case 'G':
        strcpy(notes, " Good ");
        break;
    case 'A':
        strcpy(notes, " Average");
        break;
    case 'F':
        strcpy(notes, " Fails");
        break;
    default :
        strcpy(notes, "Invalid Grade Found. \n");
        break;
    }
    printf("You have chosen  : %s\n", notes);
} 