//11 Write a program to check if a year is leap year or not. If a year is divisible by 4 then it is leap year but if the year is century year like 2000, 1900, 2100 then it must be divisible by 400.
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly visible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if visible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap year
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}