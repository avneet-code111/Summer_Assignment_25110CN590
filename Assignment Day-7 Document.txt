
///Q-25) Write a program to Recursive factorial. 

#include <stdio.h>

int fact(int n)
{
    if(n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}

///Q-26) Write a program to Recursive Fibonacci. 

#include <stdio.h>

int fib(int n)
{
    if(n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
    return 0;
}

///Q-27) Write a program to Recursive sum of digits. 

#include <stdio.h>

int sum(int n)
{
    if(n == 0)
        return 0;
    return n % 10 + sum(n / 10);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}

///Q-28) Write a program to Recursive reverse number.

#include <stdio.h>

int rev(int n, int r)
{
    if(n == 0)
        return r;
    return rev(n / 10, r * 10 + n % 10);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", rev(n, 0));
    return 0;
}