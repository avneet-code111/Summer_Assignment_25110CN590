

///Q-109) Write a program to Create library management system. 

#include <stdio.h>

int main() {
    int id[10], n, i, choice, searchId;
    char title[10][50];

    printf("How many books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter id and title: ");
        scanf("%d %s", &id[i], title[i]);
    }

    while(1) {
        printf("\n1. Show Books\n2. Search Book\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("\nBook List:\n");
            for(i = 0; i < n; i++) {
                printf("ID: %d Title: %s\n", id[i], title[i]);
            }
        }
        else if(choice == 2) {
            printf("Enter book id: ");
            scanf("%d", &searchId);
            for(i = 0; i < n; i++) {
                if(id[i] == searchId) {
                    printf("Found - ID: %d Title: %s\n", id[i], title[i]);
                    break;
                }
            }
            if(i == n) {
                printf("Book not found\n");
            }
        }
        else if(choice == 3) {
            break;
        }
    }

    return 0;
}

///Q-110) Write a program to Create bank account system. 

#include <stdio.h>

int main() {
    char name[20];
    int accNo, choice;
    float balance = 0, amount;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter account number: ");
    scanf("%d", &accNo);

    while(1) {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter amount: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Deposited\n");
        }
        else if(choice == 2) {
            printf("Enter amount: ");
            scanf("%f", &amount);
            if(amount <= balance) {
                balance = balance - amount;
                printf("Withdrawn\n");
            }
            else {
                printf("Insufficient balance\n");
            }
        }
        else if(choice == 3) {
            printf("Name: %s\n", name);
            printf("Account: %d\n", accNo);
            printf("Balance: %.2f\n", balance);
        }
        else if(choice == 4) {
            break;
        }
    }

    return 0;
}

///Q-111) Write a program to Create ticket booking system. 

#include <stdio.h>

int main() {
    int seat[3] = {0, 0, 0};
    int n;

    printf("Seats: 1 2 3\n");
    printf("Book seat 1-3: ");
    scanf("%d", &n);

    if(n >= 1 && n <= 3 && seat[n-1] == 0) {
        seat[n-1] = 1;
        printf("Booked seat %d\n", n);
    }
    else {
        printf("Invalid or booked\n");
    }

    return 0;
}

///Q-112) Write a program to Create contact management system. 

#include <stdio.h>

int main() {
    char name[5][20];
    long phone[5];
    int n, i;

    printf("How many contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name phone: ");
        scanf("%s %ld", name[i], &phone[i]);
    }

    printf("\nContact List:\n");
    for(i = 0; i < n; i++) {
        printf("%s %ld\n", name[i], phone[i]);
    }

    return 0;
}




