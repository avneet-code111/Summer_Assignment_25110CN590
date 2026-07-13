

///Q-117) Write a program to Create student record system using arrays and strings.

#include <stdio.h>

int main() {
    int roll[5], marks[5], n, i;
    char name[5][20];

    printf("How many students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter roll name marks: ");
        scanf("%d %s %d", &roll[i], name[i], &marks[i]);
    }

    printf("\nStudent Records:\n");
    for(i = 0; i < n; i++) {
        printf("Roll:%d Name:%s Marks:%d\n", roll[i], name[i], marks[i]);
    }

    return 0;
}

///Q-118) Write a program to Create mini library system. 

#include <stdio.h>

int main() {
    int id[5], n, i;
    char title[5][30];

    printf("How many books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter id title: ");
        scanf("%d %s", &id[i], title[i]);
    }

    printf("\nLibrary Books:\n");
    for(i = 0; i < n; i++) {
        printf("ID:%d Title:%s\n", id[i], title[i]);
    }

    return 0;
}

///Q-119) Write a program to Create mini employee management system.

#include <stdio.h>

int main() {
    int id[5], salary[5], n, i;
    char name[5][20];

    printf("How many employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter id name salary: ");
        scanf("%d %s %d", &id[i], name[i], &salary[i]);
    }

    printf("\nEmployee List:\n");
    for(i = 0; i < n; i++) {
        printf("ID:%d Name:%s Salary:%d\n", id[i], name[i], salary[i]);
    }

    return 0;
}

///Q-120) Write a program to Develop complete mini project using arrays, strings and functions. 

#include <stdio.h>

void input(char name[][20], int marks[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Enter name marks: ");
        scanf("%s %d", name[i], &marks[i]);
    }
}

void show(char name[][20], int marks[], int n) {
    printf("\nRecords:\n");
    for(int i = 0; i < n; i++) {
        printf("%s %d\n", name[i], marks[i]);
    }
}

void average(int marks[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += marks[i];
    }
    printf("Average: %.2f\n", sum / (float)n);
}

int main() {
    char name[5][20];
    int marks[5], n;

    printf("How many students: ");
    scanf("%d", &n);

    input(name, marks, n);
    show(name, marks, n);
    average(marks, n);

    return 0;
}







