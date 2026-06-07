
/// Q-13) Write a program to Generate Fibonacci series. 

#include <stdio.h>

int main()
{
    int n, i;  // n = how many terms, i = for loop
    int first, second, next;  // 3 boxes for the series
    
    first = 0;  // 1st term
    second = 1;  // 2nd term
    
    printf("Enter how many terms: ");
    scanf("%d", &n);  // take number of terms
    
    printf("Fibonacci Series: ");
    
    // print first two terms
    printf("%d %d ", first, second);
    
    // print rest of the terms
    for(i = 3; i <= n; i++)  // we already printed 2 terms, so start from 3
    {
        next = first + second;  // add last 2 numbers
        printf("%d ", next);  // print next number
        
        // update first and second for next round
        first = second;  // shift second → first
        second = next;  // shift next → second
    }
    
    return 0;
}

/// Q-14) Write a program to Find nth Fibonacci term. 

#include <stdio.h>

int main()
{
    int n, i;  // n = which term, i = for loop
    int first, second, next;  // 3 boxes
    
    first = 0;  // 1st term
    second = 1;  // 2nd term
    
    printf("Enter n: ");
    scanf("%d", &n);  // which term do you want
    
    if(n == 1)  // if user wants 1st term
    {
        printf("%d term = %d", n, first);
    }
    else if(n == 2)  // if user wants 2nd term
    {
        printf("%d term = %d", n, second);
    }
    else  // for 3rd term and above
    {
        // same logic as series, but we don't print every term
        for(i = 3; i <= n; i++)  // start from 3rd term
        {
            next = first + second;  // add last 2 numbers
            
            first = second;  // shift
            second = next;  // shift
        }
        printf("%d term = %d", n, next);  // print only nth term
    }
    
    return 0;
}

/// Q-15) Write a program to Check Armstrong number. 

#include <stdio.h>

int main()
{
    int num, digit, sum, original;  // 4 boxes
    
    sum = 0;  // start sum from 0
    
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);  // take number
    
    original = num;  // save original number
    
    // take each digit, cube it, add to sum
    while(num != 0)
    {
        digit = num % 10;  // get last digit
        sum = sum + digit * digit * digit;  // cube and add
        num = num / 10;  // remove last digit
    }
    
    // compare sum with original
    if(sum == original)
        printf("Armstrong number");
    else
        printf("Not Armstrong");
    
    return 0;
}


/// Q-16) Write a program to Print Armstrong numbers in a range.

#include <stdio.h>

int main()
{
    int start, end, i, num, digit, sum, original;
    
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter end number: ");
    scanf("%d", &end);
    
    printf("Armstrong numbers from %d to %d are: \n", start, end);
    
    // check each number from start to end
    for(i = start; i <= end; i++)
    {
        num = i;  // take current number
        original = num;  // save it
        sum = 0;  // reset sum for each number
        
        // step 1: find sum of cubes of digits
        while(num != 0)
        {
            digit = num % 10;  // get last digit
            sum = sum + digit * digit * digit;  // cube and add
            num = num / 10;  // remove last digit
        }
        
        // step 2: check if sum == original
        if(sum == original)
        {
            printf("%d ", original);  // print if Armstrong
        }
    }
    
    return 0;
}



