

#include <stdio.h>

int main() {
    int num, count = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num == 0) {
        count = 1;
    } else {
        
        for (int i = num; i != 0; i /= 10) {
            count++; 
        }
    }

    
    printf("Number of digits: %d\n", count);

    return 0;
}
