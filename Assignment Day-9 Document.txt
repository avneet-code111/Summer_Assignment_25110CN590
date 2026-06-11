
///Q-33) Write a program to Print reverse star pattern.
///*****
///****
///***
///**
///*

#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

///Q-34) Write a program to Print reverse number triangle.
///12345
///1234
///123
///12
///1

#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}

///Q-35) Write a program to Print repeated characterpattern.
///A
///BB
///CCC
///DDDD
///EEEEE

#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
            printf("%c", 'A' + i);
        printf("\n");
    }
    return 0;
}

///Q-36) Write a program to Print hollow square pattern.
///*****
///*   *
///*   *
///*   *
///*****

#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}