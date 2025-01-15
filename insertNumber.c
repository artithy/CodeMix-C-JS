// Online C compiler to run C program online
#include <stdio.h>

int main(){ 
    

     int arr[100],position, i, n, value;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &position);
    
    printf("Input the value to be inserted : ");
    scanf("%d",&value);
    
    position = position-1;
    
    
    for(i=n-1; i>=position;i--){
        arr[i+1]=arr[i];}
        arr[position]=value;
        n++;
        
        
        for(i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }


  
  
return 0;
}