#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  
    
    for (int i = num; i != 0; i/=10) { 
        
        remainder = i % 10; 
        reversedNum = reversedNum * 10 + remainder;  
    }

    
    if (originalNum == reversedNum) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
