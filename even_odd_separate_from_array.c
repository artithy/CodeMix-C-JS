#include <stdio.h>

int main() {
    int n, i;
    
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    int arr[n], even[n], odd[n];
    int even_count = 0, odd_count = 0;
    
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
  
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even[even_count++] = arr[i];
        } else {
            odd[odd_count++] = arr[i];
        }
    }
    
   
    printf("The Even elements are:\n");
    for(i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    

    printf("The Odd elements are:\n");
    for(i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
