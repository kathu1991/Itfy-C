#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
    int n = atoi(argv[1]);

    char **arr;
   char str[128];
    arr = malloc(n * sizeof(char *));
    printf("number of lines %d \n", n) ;
    for (int i = 0; i < n; i++)
    {
         
        printf("\n Enter the String:  ");
        gets(str);
        int len = strlen(str) ;
        arr[i] = (char *)  malloc(len * sizeof(char)) ;
        strcpy(arr[i],str) ;
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n Element in is %s ", arr[i]);
    }
}