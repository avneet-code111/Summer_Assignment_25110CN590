
///Q-41) Write a program to Write function to find sum of two numbers.

#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", sum(x, y));
    return 0;
}

///Q-42) Write a program to Write function to find maximum.

#include <stdio.h>

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", max(x, y));
    return 0;
}

///Q-43) Write a program to Write function to check prime.

#include <stdio.h>

int isPrime(int n)
{
    if(n <= 1)
        return 0;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num;
    scanf("%d", &num);
    if(isPrime(num))
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}

///Q-44) Write a program to Write function to find factorial.

#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", factorial(num));
    return 0;
}
