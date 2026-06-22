
///Q-73) Write a program to Add matrices. 

#include <stdio.h>

int main()
{
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

///Q-74) Write a program to Subtract matrices. 

#include <stdio.h>

int main()
{
    int a[2][2] = {{9, 8}, {7, 6}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int diff[2][2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of matrices:\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}


///Q75) Write a program to Transpose matrix.

#include <stdio.h>

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int trans[3][2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            trans[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}

///Q-76) Write a program to Find diagonal sum. 

#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;

    for(int i = 0; i < 3; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal: %d", sum);

    return 0;
}







