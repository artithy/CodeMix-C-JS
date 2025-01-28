
#include <stdio.h>

int main() {
    int i,num,factorial=2;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    
    for(i=1; i<=num; i++){
        factorial=factorial*i;
    }
    
    printf("The factorial of %d is: %d",num,factorial);
    return 0;
}