
///Q-45) Write a program to Write function for palindrome. 

#include <stdio.h>

int isPalindrome(int n)
{
    int rev = 0, temp = n;
    while(temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    return (rev == n);
}

int main()
{
    int num;
    scanf("%d", &num);
    if(isPalindrome(num))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}

///Q-46) Write a program to Write function for Armstrong. 

#include <stdio.h>

int isArmstrong(int n)
{
    int sum = 0, temp = n;
    while(temp > 0)
    {
        int digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }
    return (sum == n);
}

int main()
{
    int num;
    scanf("%d", &num);
    if(isArmstrong(num))
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}

///Q-47) Write a program to Write function for Fibonacci. 

#include <stdio.h>

int fibonacci(int n)
{
    if(n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", fibonacci(num));
    return 0;
}

///Q-48) Write a program to Write function for perfect number. 

#include <stdio.h>

int isPerfect(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }
    return (sum == n);
}

int main()
{
    int num;
    scanf("%d", &num);
    if(isPerfect(num))
        printf("Perfect Number");
    else
        printf("Not Perfect");
    return 0;
}


