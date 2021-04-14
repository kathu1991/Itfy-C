#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sortString(int n, char *arr[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int comp = strcmp(arr[i], arr[j]);
            // printf("comp is %d",comp);
            if (comp > 0)
            {
                char *temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return 1;
}

int main(int argc, char **argv)
{
    int n = atoi(argv[1]);

    char **arr;
    // printf("\n Entered length of array is %d", n);

    char str[128];
    arr = malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {

        printf("\n Enter the String:  ");
        gets(str);
        int len = strlen(str);
        //   printf("\n Size of the String is %d:  \n",len);
        arr[i] = (char *)malloc(len * sizeof(char));
        strcpy(arr[i], str);
    }
    sortString(n, arr);
    for (int i = 0; i < n; i++)
    {
        printf("\n Sorted string in is %s ", arr[i]);
    }
}