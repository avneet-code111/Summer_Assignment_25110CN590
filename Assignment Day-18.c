
///Q-69) Write a program to Bubble sort. 

#include <stdio.h>

int main()
{
    int arr[5] = {5, 1, 4, 2, 8};
    int n = 5, temp;

    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

///Q-70) Write a program to Selection sort. 

#include <stdio.h>

int main()
{
    int arr[5] = {64, 25, 12, 22, 11};
    int n = 5, temp, min;

    for(int i = 0; i < n-1; i++)
    {
        min = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

///Q-71) Write a program to Binary search. 

#include <stdio.h>

int main()
{
    int arr[6] = {2, 5, 8, 12, 16, 23};
    int n = 6, key = 16;
    int low = 0, high = n-1, mid;
    int found = 0;

    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == key)
        {
            printf("Element found at position %d", mid);
            found = 1;
            break;
        }
        if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}

///Q-72) Write a program to Sort array in descending order. 

#include <stdio.h>

int main()
{
    int arr[5] = {10, 45, 32, 67, 19};
    int n = 5, temp;

    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Descending order: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}





