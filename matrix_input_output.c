// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int row ,column;
   
   printf("Enter row: ");
   scanf("%d", &row);
   
   printf("Enter column: ");
   scanf("%d", &column);
   
   int arr[row][column], i,j;
   printf("Enter the values: \n");
   
   for(i=0;  i<row; i = i+1){
       for(j=0;  j<column; j = j+1){
           scanf("%d", &arr[i][j]);
       }
   }
   
   
   printf("\nDisplay: \n");
   for(i=0; i<row; i=i+1){
       for(j=0; j<column; j = j+1){
           printf("Index(%d, %d), value: %d\t",i,j,arr[i][j]);
       }
       printf("\n");
   }
   
   
   

    return 0;
}