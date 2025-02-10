// Online C compiler to run C program online
#include <stdio.h>

int main(){ 
    
     int n;
     int arr1[100];
     int temp;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);
    
    
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            
            if(arr1[j]<arr1[i]){
                temp = arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
            
        }
        
    }
    
    
    printf("Elements of array in sorted ascending order:");
    for(int i=0; i<n; i++)
    {
        printf(" %d", arr1[i]);
    }
  
return 0;
}