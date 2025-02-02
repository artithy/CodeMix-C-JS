#include <stdio.h>

int main() {
    int m, p, n;

    
    printf("Enter the number of rows and columns for the first matrix (m x p): ");
    scanf("%d %d", &m, &p);

    printf("Enter the number of rows and columns for the second matrix (p x n): ");
    scanf("%d %d", &p, &n);

    int first[m][p], second[p][n], result[m][n];

  
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &first[i][j]);
        }
    }

   
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
        }
    }

 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < p; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }


    printf("Multiplication Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
