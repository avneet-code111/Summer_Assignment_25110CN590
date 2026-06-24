
///Q-77) Write a program to Multiply matrices.

#include <stdio.h>

int main() {
    int a[3][3], b[3][3], result[3][3];
    int i, j, k;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            result[i][j] = 0;
            for(k = 0; k < 3; k++) {
                result[i][j] = result[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

///Q-78) Write a program to Check symmetric matrix.

#include <stdio.h>

int main() {
    int a[3][3];
    int i, j;
    int flag = 1;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(a[i][j]!= a[j][i]) {
                flag = 0;
            }
        }
    }

    if(flag == 1) {
        printf("Symmetric");
    }
    else {
        printf("Not Symmetric");
    }

    return 0;
}

///Q-79) Write a program to Find row-wise sum. 

#include <stdio.h>

int main() {
    int a[3][3];
    int i, j, sum;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        sum = 0;
        for(j = 0; j < 3; j++) {
            sum = sum + a[i][j];
        }
        printf("%d\n", sum);
    }

    return 0;
}

///Q-80) Write a program to Find column-wise sum. 

#include <stdio.h>

int main() {
    int a[3][3];
    int i, j, sum;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(j = 0; j < 3; j++) {
        sum = 0;
        for(i = 0; i < 3; i++) {
            sum = sum + a[i][j];
        }
        printf("%d ", sum);
    }

    return 0;
}



