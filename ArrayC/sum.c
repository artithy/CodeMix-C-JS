#include <stdio.h>
int main(){
    int i;
    int element[3];
    int n;
    int sum = 0;

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    printf("Input %d number of elements in the array: \n",n);
    for(i=0; i<n; i++){
        printf("element - %d: ",i);
        scanf("%d", &element[i]);

    }
    

    
    for(i=0; i<n; i++){
       sum = sum + element[i];
    }
    printf("Sum of all elements stored in the array is: %d\n",sum);
    
}