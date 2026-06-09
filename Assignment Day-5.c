
/// Q-17) Write a program to Check Perfect number.

#include <stdio.h>

int main()
{
    int num, i, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
            sum = sum + i;
    }
    
    if(sum == num)
        printf("Perfect");
    else
        printf("Not Perfect");
    
    return 0;
}

/// Q-18) Write a program to Check Amstrong number.

#include <stdio.h>

#include <stdio.h>

int main()
{
    int num, digit, sum = 0, original;
    
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    
    original = num;  // save the number
    
    while(num > 0)
    {
        digit = num % 10;  // get last digit
        sum = sum + digit * digit * digit;  // cube it and add
        num = num / 10;  // remove last digit
    }
    
    if(sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    
    return 0;
}

///Q-19) Write a program to Print factors of a number. 
#include <stdio.h>

int main()
{
    int num, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Factors of %d are: ", num);
    
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)  // if i divides num completely
        {
            printf("%d ", i);  // print i
        }
    }
    
    return 0;
}

///Q-20) Write a program to Find largest prime factor. 
#include <stdio.h>

int main()
{
    int num, i, largest;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num % 2 == 0)
    {
        largest = 2;
        num = num / 2;
    }
    
    // check for odd factors from 3 onwards
    for(i = 3; i <= num; i = i + 2)  // only odd numbers
    {
        while(num % i == 0)  // if i divides num
        {
            largest = i;  // update largest
            num = num / i;  // divide num
        }
    }
    
    // if num > 2, then num itself is prime
    if(num > 2)
        largest = num;
    
    printf("Largest prime factor = %d", largest);
    
    return 0;
}