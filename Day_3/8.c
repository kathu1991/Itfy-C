// A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
// Ask user for their salary and year of service and print the net bonus amount.

#include <stdio.h>

int main()
{
    int service;
    float cost;
    float bonus;
    int salary;
    float total;
    printf(" Enter Salary\n");
    scanf("%d", &salary);
    printf(" Enter Years of service\n");
    scanf("%d", &service);

    if (service > 5)
    {
        bonus = (salary * 5) / 100;
        printf("You are Bonus is %f \n", bonus);
    }
    else
    {
        printf("You are not eligible for bonus as you have less service years.\n");
    }

    return 0;
}