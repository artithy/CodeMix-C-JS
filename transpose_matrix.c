#include <stdio.h>

int main() {
    int row, col;


    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix[row][col], transpose[col][row];


    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("Element at position [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }


    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }


    printf("Transpose of the given matrix is:\n");
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
