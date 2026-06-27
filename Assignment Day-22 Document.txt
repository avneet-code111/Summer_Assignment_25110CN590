
///Q-85) Write a program to Check palindrome string. 

#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, flag = 1;

    scanf("%s", str);

    while(str[len]!= '\0') {
        len = len + 1;
    }

    for(i = 0; i < len / 2; i++) {
        if(str[i]!= str[len - 1 - i]) {
            flag = 0;
        }
    }

    if(flag == 1) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }

    return 0;
}

///Q-86) Write a program to Count words in a sentence. 

#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 1;

    scanf("%[^\n]", str);

    while(str[i]!= '\0') {
        if(str[i] == ' ') {
            words = words + 1;
        }
        i = i + 1;
    }

    if(str[0] == '\0') {
        words = 0;
    }

    printf("%d", words);

    return 0;
}

///Q-87) Write a program to Character frequency. 

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int freq[26];
    int j;

    for(j = 0; j < 26; j++) {
        freq[j] = 0;
    }

    scanf("%s", str);

    while(str[i]!= '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a'] = freq[str[i] - 'a'] + 1;
        }
        i = i + 1;
    }

    for(j = 0; j < 26; j++) {
        if(freq[j] > 0) {
            printf("%c %d\n", j + 'a', freq[j]);
        }
    }

    return 0;
}

///Q-88) Write a program to Remove spaces from string.

#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j = 0;

    scanf("%[^\n]", str);

    while(str[i]!= '\0') {
        if(str[i]!= ' ') {
            str[j] = str[i];
            j = j + 1;
        }
        i = i + 1;
    }
    str[j] = '\0';

    printf("%s", str);

    return 0;
}



