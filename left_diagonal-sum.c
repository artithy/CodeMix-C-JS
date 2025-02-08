// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i,j,sum=0;
    
    printf("Enter the size for the matrix: ");
    scanf("%d" ,&n);
    
    int matrix[n][n];
    
    
    printf("Enter the element of the matrix: \n");
    
    for(i = 0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d" , &matrix[i][j]);
            
        }
    }
    
    
    for(i = 0; i<n; i++){
        sum = sum + matrix[i][i];
    }
    
    printf("The of the right Diagonal elements is: %d\n", sum);
    return 0;
}