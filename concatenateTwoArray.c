#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    
    int result[6];  
 
    for (int i = 0; i < 3; i++) {
        result[i] = arr1[i];
    }


    for (int i = 0; i < 3; i++) {
        result[3 + i] = arr2[i];
    }


    for (int i = 0; i < 6; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
