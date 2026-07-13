

///Q-113) Write a program to Create menu-driven calculator. 

#include <stdio.h>

int main() {
    int choice;
    float a, b;

    while(1) {
        printf("\n1. Add\n2. Sub\n3. Mul\n4. Div\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 5) {
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        if(choice == 1) {
            printf("Result: %.2f\n", a + b);
        }
        else if(choice == 2) {
            printf("Result: %.2f\n", a - b);
        }
        else if(choice == 3) {
            printf("Result: %.2f\n", a * b);
        }
        else if(choice == 4) {
            if(b != 0) {
                printf("Result: %.2f\n", a / b);
            }
            else {
                printf("Cannot divide by 0\n");
            }
        }
    }

    return 0;
}

///Q-114) Write a program to Create menu-driven array operations system. 

#include <stdio.h>

int main() {
    int arr[10], n, i, choice, sum = 0, max;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(1) {
        printf("\n1. Display\n2. Sum\n3. Max\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Array: ");
            for(i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        else if(choice == 2) {
            sum = 0;
            for(i = 0; i < n; i++) {
                sum = sum + arr[i];
            }
            printf("Sum: %d\n", sum);
        }
        else if(choice == 3) {
            max = arr[0];
            for(i = 1; i < n; i++) {
                if(arr[i] > max) {
                    max = arr[i];
                }
            }
            printf("Max: %d\n", max);
        }
        else if(choice == 4) {
            break;
        }
    }

    return 0;
}

///Q-115) Write a program to Create menu-driven string operations system. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int choice;

    printf("Enter string: ");
    scanf("%s", str);

    while(1) {
        printf("\n1. Length\n2. Reverse\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Length: %d\n", strlen(str));
        }
        else if(choice == 2) {
            strrev(str);
            printf("Reversed: %s\n", str);
        }
        else if(choice == 3) {
            break;
        }
    }

    return 0;
}

///Q-116) Write a program to Create inventory management system.

#include <stdio.h>

int main() {
    int id[5], qty[5], n, i;

    char name[5][20];

    printf("How many items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter id name qty: ");
        scanf("%d %s %d", &id[i], name[i], &qty[i]);
    }

    printf("\nInventory:\n");
    for(i = 0; i < n; i++) {
        printf("ID:%d Name:%s Qty:%d\n", id[i], name[i], qty[i]);
    }

    return 0;
}




