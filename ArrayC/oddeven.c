// Online C compiler to run C program online
#include <stdio.h>
int main(){
     int i;
    int even[100] ;
    int odd[100];
    int original[100];
    int n;
    int evenIndex=0, oddIndex=0;
    
    
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array: \n",n);
    for(i=0; i<n; i++){
        printf("element - %d: ",i);
        scanf("%d", &original[i]);}
        
        for(i=0; i<n; i++){
            
            if(original[i]%2==0){
               even[evenIndex] = original[i];
               evenIndex+=1;
            }else{
                odd[oddIndex] = original[i];
                oddIndex+=1;
            }
            
        }
        
        
        printf("The even numbers are: ");
        for(i=0; i<evenIndex; i++){
            printf(" %d",even[i]);
        }
        
        
        
        printf("\nThe odd numbers are: ");
        for(i=0; i<oddIndex; i++){
            printf(" %d",odd[i]);
        }
        
        
return 0;
}