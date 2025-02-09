
#include <stdio.h>

int main() {
    int a;
    
    printf("Ener the numbers for a: ");
    scanf("%d", &a);
    
    if(a%2==0){
        printf("They are even");
    }else{
        printf("They are odd");
    }

    return 0;
}