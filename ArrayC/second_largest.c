// Online C compiler to run C program online
#include <stdio.h>

int main(){ 
    int i,j,max,max2,arr[100],n;
    
    printf("Enter the element number for array: ");
    scanf("%d", &n);
    
    printf("Enter the numbers: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
     
     
    max= arr[0];
    max = arr[0];
    for(i=0; i<n; i++){
       for (j = 0; j < n; j++) {
            if (arr[i] > arr[j]) {
                if (arr[i] > max) {
                    max2 = max;  
                    max = arr[i]; 
                } else if (arr[i] > max2 && arr[i] != max) {
                    max2 = arr[i]; 
                }
            }
       }
    }
    
    
    printf("The first maximum number of the array is: %d",max);
    printf("\nThe second maximum number of the array is: %d",max2);
    
  
return 0;
}