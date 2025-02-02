#include <stdio.h>

int main() {
    int n;

   
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int first[n][n], second[n][n], result[n][n];


    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &first[i][j]);
        }
    }

   
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &second[i][j]);
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

 
    printf("Resultant Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
