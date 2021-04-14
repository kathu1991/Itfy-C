//A student will not be allowed to sit in exam if his/her attendance is less than 75%.
//  Take following input from user,  Number of classes held Number of classes attended, and print percentage of class attended. Is student is allowed to sit in exam or not.
#include <stdio.h>
int main()
{
    float attendance;
    float a;
    float b;
    printf(" Enter Number of classes held\n");
    scanf("%f", &a);
    printf(" Enter Number of class attended\n");
    scanf("%f", &b);

    // check percentage

    attendance = b / a * 100;
    printf("Attendance is %f \n",attendance);
    if (attendance >= 75)
    {

        printf("The student is allowed to sit in the exam hall");
    }
    else
    {
        printf("The student is not allowed to sit in the exam hall");
    }

    return 0;
}