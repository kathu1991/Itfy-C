// Use local and global variable; print its value (int, string, boolean)

#include <stdio.h>
#include <stdbool.h>
char name[]="ITfy-Me";//Global variable
bool isValidated=true;
int main()
{
int result = 5; //local variable
printf("Local variable is %d \n", result);

printf("Global variable-String is %s \n", name);

printf("Global variable-Boolean  is %d \n", isValidated);// this will return 1 instead of true
return 0;
}
