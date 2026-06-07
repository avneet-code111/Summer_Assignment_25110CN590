
/// Q-1 Write a program to Calculate sum of first N natural numbers.

#include <stdio.h>

int main()
{
    int n, i, sum;  // make 3 boxes: n, i, sum
    
    sum = 0;  // start sum from 0
    
    printf("Enter N: ");
    scanf("%d", &n);  // take N from user
    
    // add numbers from 1 to N
    for(i = 1; i <= n; i++)  // i will be 1,2,3...N
    {
        sum = sum + i;  // add i to sum each time
    }
    
    printf("Sum = %d", sum);  // show answer
    
    return 0;
}

///Q-2 Write a program to Print multiplication table of a given number.
#include <stdio.h>

int main()
{
    int num, i;  // 2 boxes: num for table, i for 1 to 10
    
    printf("Enter a number: ");
    scanf("%d", &num);  // take number from user
    
    // print table from 1 to 10
    for(i = 1; i <= 10; i++)  // i will be 1,2,3...10
    {
        printf("%d x %d = %d\n", num, i, num * i);  // print one line
    }
    
    return 0;
}

/// Q-3 Write a program to Find factorial of a number.

#include <stdio.h>

int main()
{
    int n, i, fact;  // 3 boxes: n = number, i = counter, fact = answer
    
    fact = 1;  // factorial starts from 1, not 0
    
    printf("Enter a number: ");
    scanf("%d", &n);  // take number from user
    
    // multiply numbers from 1 to n
    for(i = 1; i <= n; i++)  // i will be 1,2,3...n
    {
        fact = fact * i;  // multiply fact by i each time
    }
    
    printf("Factorial = %d", fact);  // show answer
    
    return 0;
}

/// Q-4 Write a program to Count digits in a number. 

#include <stdio.h>

int main()
{
    int num, count;  // 2 boxes: num for number, count for counting digits
    
    count = 0;  // start counting from 0
    
    printf("Enter a number: ");
    scanf("%d", &num);  // take number from user
    
    // keep dividing by 10 until number becomes 0
    while(num != 0)  // repeat till num is not 0
    {
        num = num / 10;  // remove last digit
        count = count + 1;  // increase count by 1
    }
    
    printf("Total digits = %d", count);  // show answer
    
    return 0;
}
