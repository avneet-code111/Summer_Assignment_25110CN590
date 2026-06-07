
/// Q-5) Write a program to Find sum of digits of a number.
#include <stdio.h>

int main()
{
    int num, digit, sum;  // 3 boxes: num, digit, sum
    
    sum = 0;  // start sum from 0
    
    printf("Enter a number: ");
    scanf("%d", &num);  // take number from user
    
    // keep taking last digit and adding
    while(num != 0)  // repeat till num becomes 0
    {
        digit = num % 10;  // get last digit
        sum = sum + digit;  // add digit to sum
        num = num / 10;  // remove last digit
    }
    
    printf("Sum of digits = %d", sum);  // show answer
    
    return 0;
}

/// Q-6) Write a program to Reverse a number. 

#include <stdio.h>

int main()
{
    int num, digit, reverse;  // 3 boxes: num, digit, reverse
    
    reverse = 0;  // start reverse from 0
    
    printf("Enter a number: ");
    scanf("%d", &num);  // take number from user
    
    // take last digit and build reverse number
    while(num != 0)  // repeat till num becomes 0
    {
        digit = num % 10;  // get last digit
        reverse = reverse * 10 + digit;  // add digit to reverse
        num = num / 10;  // remove last digit
    }
    
    printf("Reverse = %d", reverse);  // show answer
    
    return 0;
}

/// Q-7) Write a program to Find product of digits.

#include <stdio.h>

int main()
{
    int num, digit, product;  // 3 boxes: num, digit, product
    
    product = 1;  // product starts from 1, not 0
    
    printf("Enter a number: ");
    scanf("%d", &num);  // take number from user
    
    // take each digit and multiply
    while(num != 0)  // repeat till num becomes 0
    {
        digit = num % 10;  // get last digit
        product = product * digit;  // multiply with product
        num = num / 10;  // remove last digit
    }
    
    printf("Product of digits = %d", product);  // show answer
    
    return 0;
}

/// Q-8) Write a program to Check whether a number is palindrome.

#include <stdio.h>

int main()
{
    int num, digit, reverse, original;  // 4 boxes
    
    reverse = 0;  // start reverse from 0
    
    printf("Enter a number: ");
    scanf("%d", &num);  // take number from user
    
    original = num;  // save original number for comparing later
    
    // step 1: reverse the number
    while(num != 0)  // repeat till num becomes 0
    {
        digit = num % 10;  // get last digit
        reverse = reverse * 10 + digit;  // build reverse
        num = num / 10;  // remove last digit
    }
    
    // step 2: compare original and reverse
    if(original == reverse)  // if both same
    {
        printf("Palindrome number");
    }
    else  // if not same
    {
        printf("Not a palindrome");
    }
    
    return 0;
}