
///Q-53) Write a program to Linear search. 

#include <stdio.h>

int main()
{
    int n, key, found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}

///Q-54) Write a program to Frequency of an element.

#include <stdio.h>

int main()
{
    int n, key, count = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to count: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
            count++;
    }

    printf("Frequency of %d = %d", key, count);

    return 0;
}

///Q-55) Write a program to Second largest element. 

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int first = arr[0];
    int second = -999999;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i]!= first)
        {
            second = arr[i];
        }
    }

    if(second == -999999)
        printf("No second largest element");
    else
        printf("Second largest = %d", second);

    return 0;
}

///Q-56) Write a program to Find duplicates in array. 

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Duplicate elements: ");
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}




