#include <stdio.h>

int main() {
   int row, column;
   
   printf("Enter row: ");
   scanf("%d", &row);
   
   printf("Enter column: ");
   scanf("%d", &column);
   
   int arr1[row][column], arr2[row][column], sum[row][column], product[row][column], i, j, k;
 
   printf("Enter elements of 1st matrix:\n");
   for(i = 0; i < row; i++) {
       for(j = 0; j < column; j++) {
           scanf("%d", &arr1[i][j]);
       }
   }
   
   printf("Enter elements of 2nd matrix:\n");
   for(i = 0; i < row; i++) {
       for(j = 0; j < column; j++) {
           scanf("%d", &arr2[i][j]);
       }
   }

   
   for(i = 0; i < row; i++) {
       for(j = 0; j < column; j++) {
           sum[i][j] = arr1[i][j] + arr2[i][j];
       }
   }
  
   
   for(i = 0; i < row; i++) {
       for(j = 0; j < column; j++) {
           product[i][j] = 0;
           for(k = 0; k < column; k++) {
               product[i][j] += arr1[i][k] * arr2[k][j];
           }
       }
   }

  
   printf("Sum of two matrices:\n");
   for(i = 0; i < row; i++) {
       for(j = 0; j < column; j++) {
           printf("%d\t", sum[i][j]);
       }
       printf("\n");
   }

   
   printf("Product of two matrices:\n");
   for(i = 0; i < row; i++) {
       for(j = 0; j < column; j++) {
           printf("%d\t", product[i][j]);
       }
       printf("\n");
   }

   return 0;
}
