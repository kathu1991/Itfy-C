
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
#define MAX_NAME_LEN 128

struct Student
{
   int rollNo;
   char name[100];
   int age;
   float marks;
};
int main(){

struct Student st1;
st1.age=15;
st1.rollNo=1;
strcpy(st1.name,"Rajesh");
st1.marks=80.5;
printf("\nRoll Num is %d",st1.rollNo);
printf("\nName is %s",st1.name);
printf("\nAge is %d",st1.age);
printf("\nMarks is %.2f",st1.marks);

    return 0;
}

