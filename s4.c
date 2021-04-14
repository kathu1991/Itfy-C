#include <stdio.h>
#include <stdlib.h>

int sort(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        int ele = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int descend(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        int ele = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    int *arr;
    printf("\n Enter the num of elements ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {

        printf("\n Enter the  element %d ", i);
        scanf("%d", &arr[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("\n Element arr[%d] is %d ", i, arr[i]);
    // }
    sort(n,arr);
    for (int i = 0; i < n; i++)
    {
        printf("\n Sort element arr[%d] is %d ", i, arr[i]);
    }
}