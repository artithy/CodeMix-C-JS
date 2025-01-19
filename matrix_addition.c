// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int row ,column;
   
   printf("Enter row: ");
   scanf("%d", &row);
   
   printf("Enter column: ");
   scanf("%d", &column);
   
   int arr1[row][column],arr2[row][column], sum[row][column], i,j;
 
   
   printf("Enter element of 1st metrix: \n");
   for(i=0; i<row; i++){
       for(j=0; j<column; j++){
           scanf("%d", &arr1[i][j]);
       }
   }
   
    printf("Enter element of 2nd metrix: \n");
   for(i=0; i<row; i++){
       for(j=0; j<column; j++){
           scanf("%d", &arr2[i][j]);
       }
   }
  
  
  for(i=0; i<row; i++){
      for(j=0; j<column; j++){
          sum[i][j] = arr1[i][j] + arr2[i][j];
         
      }
  }
  
   printf("sum of two metrix: \n");
   for(i=0; i<row; i++){
       for(j=0; j<column; j++){
          printf("%d\t", sum[i][j]);
         
       }
       printf("\n");
   }
  
   
   
   
   

    return 0;
} 
