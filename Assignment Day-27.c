

///Q-105) Write a program to Create student record management system. 

#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[10];
    int n, i, choice, roll;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter roll, name, marks: ");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    while(1) {
        printf("\n1. Display All\n2. Search by Roll\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            for(i = 0; i < n; i++) {
                printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
            }
        }
        else if(choice == 2) {
            printf("Enter roll: ");
            scanf("%d", &roll);
            for(i = 0; i < n; i++) {
                if(s[i].roll == roll) {
                    printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
                    break;
                }
            }
        }
        else if(choice == 3) {
            break;
        }
    }

    return 0;
}

///Q-106) Write a program to Create employee management system. 

#include <stdio.h>

int main() {
    int id[5], i, n;
    char name[5][20];
    float salary[5];

    printf("How many employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter id name salary: ");
        scanf("%d %s %f", &id[i], name[i], &salary[i]);
    }

    printf("\nEmployee List:\n");
    for(i = 0; i < n; i++) {
        printf("%d %s %.0f\n", id[i], name[i], salary[i]);
    }

    return 0;
}

///Q-107) Write a program to Create salary management system.

#include <stdio.h>

int main() {
    char name[5][20];
    float salary[5], total = 0;
    int n, i;

    printf("How many employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name salary: ");
        scanf("%s %f", name[i], &salary[i]);
        total = total + salary[i];
    }

    printf("\nSalary List:\n");
    for(i = 0; i < n; i++) {
        printf("%s %.0f\n", name[i], salary[i]);
    }

    printf("Total: %.0f\n", total);
    printf("Average: %.0f\n", total/n);

    return 0;
}

///Q-108) Write a program to Create marksheet generation system.

#include <stdio.h>

int main() {
    char name[20];
    int m1, m2, m3, total;
    float avg;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("\nMarksheet\n");
    printf("Name: %s\n", name);
    printf("Subject 1: %d\n", m1);
    printf("Subject 2: %d\n", m2);
    printf("Subject 3: %d\n", m3);
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", avg);

    if(avg >= 90) {
        printf("Grade: A\n");
    }
    else if(avg >= 75) {
        printf("Grade: B\n");
    }
    else if(avg >= 60) {
        printf("Grade: C\n");
    }
    else if(avg >= 40) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}




