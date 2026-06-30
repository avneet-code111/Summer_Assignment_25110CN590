
///Q-97) Write a program to Merge two sorted arrays.

#include <stdio.h>

int main() {
    int a[3] = {1, 4, 6};
    int b[3] = {2, 3, 5};
    int c[6];
    int i = 0, j = 0, k = 0;

    while(i < 3 && j < 3) {
        if(a[i] < b[j]) {
            c[k] = a[i];
            i = i + 1;
        }
        else {
            c[k] = b[j];
            j = j + 1;
        }
        k = k + 1;
    }

    while(i < 3) {
        c[k] = a[i];
        i = i + 1;
        k = k + 1;
    }

    while(j < 3) {
        c[k] = b[j];
        j = j + 1;
        k = k + 1;
    }

    for(i = 0; i < 6; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}

///Q-98) Write a program to Find common characters in strings. 

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j;

    scanf("%s", str1);
    scanf("%s", str2);

    while(str1[i]!= '\0') {
        j = 0;
        while(str2[j]!= '\0') {
            if(str1[i] == str2[j]) {
                printf("%c", str1[i]);
                break;
            }
            j = j + 1;
        }
        i = i + 1;
    }

    return 0;
}

///Q-99) Write a program to Sort names alphabetically. 

#include <stdio.h>
#include <string.h>

int main() {
    char name[10][50], temp[50];
    int n, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s", name[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    for(i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}

///Q-100) Write a program to Sort words by length.

#include <stdio.h>
#include <string.h>

int main() {
    char word[10][50], temp[50];
    int n, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s", word[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strlen(word[i]) > strlen(word[j])) {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    for(i = 0; i < n; i++) {
        printf("%s ", word[i]);
    }

    return 0;
}




