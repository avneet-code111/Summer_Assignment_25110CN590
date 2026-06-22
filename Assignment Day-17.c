
///Q-65) Write a program to Merge arrays.

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements: ", n1);
    for(int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements: ", n2);
    for(int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    int merged[n1 + n2];
    for(int i = 0; i < n1; i++)
        merged[i] = arr1[i];
    for(int i = 0; i < n2; i++)
        merged[n1 + i] = arr2[i];

    printf("Merged array: ");
    for(int i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);

    return 0;
}

///Q-66) Write a program to Union of arrays. 

#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[4] = {3, 4, 6, 7};
    int c[20];
    int k = 0;

    for(int i = 0; i < 5; i++)
        c[k++] = a[i];

    for(int i = 0; i < 4; i++)
    {
        int flag = 0;
        for(int j = 0; j < 5; j++)
        {
            if(b[i] == a[j])
                flag = 1;
        }
        if(flag == 0)
            c[k++] = b[i];
    }

    printf("Union: ");
    for(int i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}

///Q-67) Write a program to Intersection of arrays. 

#include <stdio.h>

int main()
{
    int a[6] = {2, 4, 6, 8, 10, 12};
    int b[5] = {1, 2, 4, 10, 15};

    printf("Intersection: ");
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}

///Q-68) Write a program to Find common elements. 

#include <stdio.h>

int main()
{
    int a[5] = {5, 10, 15, 20, 25};
    int b[4] = {10, 20, 30, 40};

    printf("Common elements: ");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}



