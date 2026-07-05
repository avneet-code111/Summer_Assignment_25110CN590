

///Q-101) Write a program to Create number guessing game. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, tries = 0;

    srand(time(0));
    num = rand() % 100 + 1;

    printf("Guess number 1 to 100\n");

    while(1) {
        scanf("%d", &guess);
        tries = tries + 1;

        if(guess > num) {
            printf("Too high\n");
        }
        else if(guess < num) {
            printf("Too low\n");
        }
        else {
            printf("Correct in %d tries", tries);
            break;
        }
    }

    return 0;
}

///Q-102) Write a program to Create voting eligibility system. 

#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("Eligible to vote");
    }
    else {
        printf("Not eligible to vote");
    }

    return 0;
}

///Q-103) Write a program to Create ATM simulation.

#include <stdio.h>

int main() {
    int choice, amount;
    int balance = 1000;

    while(1) {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Balance: %d\n", balance);
        }
        else if(choice == 2) {
            printf("Enter amount: ");
            scanf("%d", &amount);
            balance = balance + amount;
            printf("Deposited\n");
        }
        else if(choice == 3) {
            printf("Enter amount: ");
            scanf("%d", &amount);
            if(amount <= balance) {
                balance = balance - amount;
                printf("Withdrawn\n");
            }
            else {
                printf("Insufficient balance\n");
            }
        }
        else if(choice == 4) {
            break;
        }
        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}

///Q-104) Write a program to Create quiz application.

#include <stdio.h>

int main() {
    int score = 0;
    char ans;

    printf("Quiz Time\n");

    printf("1. Capital of India?\n");
    printf("a) Mumbai  b) Delhi  c) Kolkata\n");
    printf("Your answer: ");
    scanf(" %c", &ans);
    if(ans == 'b') {
        score = score + 1;
    }

    printf("2. 5 + 3 = ?\n");
    printf("a) 6  b) 7  c) 8\n");
    printf("Your answer: ");
    scanf(" %c", &ans);
    if(ans == 'c') {
        score = score + 1;
    }

    printf("3. Largest planet?\n");
    printf("a) Earth  b) Mars  c) Jupiter\n");
    printf("Your answer: ");
    scanf(" %c", &ans);
    if(ans == 'c') {
        score = score + 1;
    }

    printf("Your score: %d/3", score);

    return 0;
}




