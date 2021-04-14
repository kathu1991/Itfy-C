#include <stdio.h>
#include <stdlib.h>

int sort(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
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

    int arr[] = {4, 7, 3, 2,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(n, arr);
      printf("\n Sorted array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n  %d ", arr[i]);
    }
}
