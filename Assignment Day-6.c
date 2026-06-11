
/// Q-21) Write a program to Convert decimal to binary.

#include <stdio.h>

int main()
{
    int n, b[32], i = 0;

    printf("Enter decimal: ");
    scanf("%d", &n);

    if(n == 0)
    {
        printf("Binary = 0");
        return 0;
    }

    while(n > 0)
    {
        b[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary = ");
    for(i = i - 1; i >= 0; i--)
        printf("%d", b[i]);

    return 0;
}

/// Q-22) Write a program to Convert binary to decimal.

#include <stdio.h>

int main()
{
    int n, d = 0, p = 1;
    scanf("%d", &n);
    while(n)
    {
        d += (n % 10) * p;
        p *= 2;
        n /= 10;
    }
    printf("%d", d);
    return 0;
}

/// Q23) Write a program to Count set bits in a number. 

#include <stdio.h>

int main()
{
    int n, c = 0;
    scanf("%d", &n);
    while(n)
    {
        if(n & 1)
            c++;
        n = n >> 1;
    }
    printf("%d", c);
    return 0;
}

/// Q-24) Write a program to Find x^n without pow(). 

#include <stdio.h>

int main()
{
    int x, n, r = 1, i;
    scanf("%d %d", &x, &n);
    for(i = 0; i < n; i++)
        r = r * x;
    printf("%d", r);
    return 0;
}