
///Q-57) Write a program to Reverse array. 

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

    // Reverse the array
    for(int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

///Q-58) Write a program to Rotate array left. 

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
    for(int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n - 1] = first;

    printf("Array after rotation: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

///Q-59) Write a program to Rotate array right. 

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

    int last = arr[n - 1];
    for(int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = last;

    printf("Array after rotation: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

///Q-60) Write a program to Move zeroes to end.

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

    int pos = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i]!= 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }
    while(pos < n)
    {
        arr[pos] = 0;
        pos++;
    }

    printf("Array after moving zeroes: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}



