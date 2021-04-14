#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int arr[1000];
    printf("\n Enter the num of elements ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

                printf("\n Enter the  element %d ",i);
        scanf("%d", &arr[i]);
   
    }
    for (int i = 0; i < n; i++)
    {
         printf("\n Element in array is %d ",arr[i]);
    }
        
}
