#include <stdio.h>

int main() {
    int arr1[] = {5, 9, 5, 3, 2, 3}; 
    int n = sizeof(arr1) / sizeof(arr1[0]); 
    int arr2[100]; 
    int i, j, uniqueCount = 0;

    
    for (i = 0; i < n; i++) {
        int isDuplicate = 0;

        
        for (j = 0; j < uniqueCount; j++) {
            if (arr1[i] == arr2[j]) {
                isDuplicate = 1; 
                break;
            }
        }

        
        if (!isDuplicate) {
            arr2[uniqueCount++] = arr1[i];
        }
    }


    printf("Array after removing duplicates: ");
    for (i = 0; i < uniqueCount; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
