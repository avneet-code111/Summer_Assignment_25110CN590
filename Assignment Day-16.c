
///Q-61) Write a program to Find missing number in array.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n-1];
    printf("Enter %d elements from 1 to %d: ", n-1, n);
    for(int i = 0; i < n-1; i++)
        scanf("%d", &arr[i]);

    int total = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < n-1; i++)
        sum = sum + arr[i];

    printf("Missing number = %d", total - sum);

    return 0;
}

///Q-62) Write a program to Find maximum frequency element. 

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

    int maxCount = 0;
    int maxElement = arr[0];

    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > maxCount)
        {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Element %d occurs %d times", maxElement, maxCount);

    return 0;
}

///Q-63) Write a program to Find pair with given sum.

#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter sum: ");
    scanf("%d", &sum);

    printf("Pairs with sum %d: ", sum);
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
                printf("%d %d ", arr[i], arr[j]);
        }
    }

    return 0;
}

///Q-64) Write a program to Remove duplicates from array.

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

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];
                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}




