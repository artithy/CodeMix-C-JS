#include <stdio.h>

int main() {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

   
    switch (number == 0) {
        case 1:
            printf("The number is zero.\n");
            break;

        case 0: 
           
            switch (number > 0) {
                case 1: // Positive numbers
                    switch (number % 3) {
                        case 0:
                            printf("The number is positive and divisible by 3.\n");
                            break;
                        default:
                            printf("The number is positive but not divisible by 3.\n");
                            break;
                    }
                    break;

                case 0: 
                    switch (number % 3) {
                        case 0:
                            printf("The number is negative and divisible by 3.\n");
                            break;
                        default:
                            printf("The number is negative but not divisible by 3.\n");
                            break;
                    }
                    break;
            }
            break;
    }

    return 0;
}
