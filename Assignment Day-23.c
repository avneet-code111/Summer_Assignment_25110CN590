
///Q-89) Write a program to Find first non-repeating character.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j;
    int freq[26];
    int k;

    for(k = 0; k < 26; k++) {
        freq[k] = 0;
    }

    scanf("%s", str);

    while(str[i]!= '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a'] = freq[str[i] - 'a'] + 1;
        }
        i = i + 1;
    }

    i = 0;
    while(str[i]!= '\0') {
        if(freq[str[i] - 'a'] == 1) {
            printf("%c", str[i]);
            break;
        }
        i = i + 1;
    }

    return 0;
}

///Q-90) Write a program to Find first repeating character. 

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j;
    int freq[26];
    int k;

    for(k = 0; k < 26; k++) {
        freq[k] = 0;
    }

    scanf("%s", str);

    while(str[i]!= '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a'] = freq[str[i] - 'a'] + 1;
            if(freq[str[i] - 'a'] == 2) {
                printf("%c", str[i]);
                break;
            }
        }
        i = i + 1;
    }

    return 0;
}

///Q-91) Write a program to Check anagram strings.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26], freq2[26];
    int i = 0, flag = 1;

    for(i = 0; i < 26; i++) {
        freq1[i] = 0;
        freq2[i] = 0;
    }

    scanf("%s", str1);
    scanf("%s", str2);

    i = 0;
    while(str1[i]!= '\0') {
        freq1[str1[i] - 'a'] = freq1[str1[i] - 'a'] + 1;
        i = i + 1;
    }

    i = 0;
    while(str2[i]!= '\0') {
        freq2[str2[i] - 'a'] = freq2[str2[i] - 'a'] + 1;
        i = i + 1;
    }

    for(i = 0; i < 26; i++) {
        if(freq1[i]!= freq2[i]) {
            flag = 0;
        }
    }

    if(flag == 1) {
        printf("Anagram");
    }
    else {
        printf("Not Anagram");
    }

    return 0;
}

///Q-92) Write a program to Find maximum occurring character.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int freq[26];
    int k, max = 0;
    char result;

    for(k = 0; k < 26; k++) {
        freq[k] = 0;
    }

    scanf("%s", str);

    while(str[i]!= '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a'] = freq[str[i] - 'a'] + 1;
        }
        i = i + 1;
    }

    for(k = 0; k < 26; k++) {
        if(freq[k] > max) {
            max = freq[k];
            result = k + 'a';
        }
    }

    printf("%c", result);

    return 0;
}






