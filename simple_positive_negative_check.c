
#include <stdio.h>

int main() {
    int a;
    
    printf("Ener the numbers for a: ");
    scanf("%d", &a);
    
    if(a>0){
        printf("They are positive");
    }else{
        printf("They are negative");
    }

    return 0;
}