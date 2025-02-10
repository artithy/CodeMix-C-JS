// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
int main(){ 
    
     int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    
    for(int i=0; i<n; i++){
        int current = arr[i];
        bool isUniq = true;
        
        
        for(int j=0; j<n; j++){
            if(i != j && current ==arr[j]){
            isUniq = false;
            break;}
            
        }
    
    if(isUniq){
                printf("%d is unique \n",current);
            }
        }
return 0;
}