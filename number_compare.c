
#include <stdio.h>

int main() {
    int a , b;
    
    printf("Ener the numbers for a, b: ");
    scanf("%d %d", &a, &b);
    
    if(a==b){
        printf("They are equal");
    }else{
        printf("They are not equal");
    }

    return 0;
}