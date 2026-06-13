
///Q-37) Write a program to Print star pyramid.
///*
///***
///*****
///*******
///*********

#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
            printf(" ");
        for(k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}

///Q-38) Write a program to Print reverse pyramid.
///*********
/// *******
///  *****
///   ***
///    *

#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= n - i; j++)
            printf(" ");
        for(k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}

///Q-39) Write a program to Print number pyramid.
///    1
///   121
///  12321
/// 1234321
///123454321

#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
            printf(" ");
        for(k = 1; k <= i; k++)
            printf("%d", k);
        for(k = i - 1; k >= 1; k--)
            printf("%d", k);
        printf("\n");
    }
    return 0;
}

///Q-40) Write a program to Print character pyramid. 
///    A
///   ABA
///  ABCBA
/// ABCDCBA
///ABCDEDCBA

#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
            printf(" ");
        for(k = 1; k <= i; k++)
            printf("%c", 'A' + k - 1);
        for(k = i - 1; k >= 1; k--)
            printf("%c", 'A' + k - 1);
        printf("\n");
    }
    return 0;
}
