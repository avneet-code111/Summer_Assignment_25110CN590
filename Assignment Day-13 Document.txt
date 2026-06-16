
///Q-49) Write a program to Input and display array. 

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

    printf("Array elements: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

///Q-50) Write a program to Find sum and average of array. 

#include <stdio.h>

int main()
{
    int n, sum = 0;
    float avg;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}

///Q-51) Write a program to Find largest and smallest element.

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

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d", min);

    return 0;
}

///Q-52) Write a program to Count even and odd elements. 

#include <stdio.h>

int main()
{
    int n, even = 0, odd = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even elements = %d\n", even);
    printf("Odd elements = %d", odd);

    return 0;
}

