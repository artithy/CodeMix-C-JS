// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,n;
    
    printf("input number of terms: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("number is: %d and cube of the %d is: %d\n",i,i,(i*i*i));
        
    }
    
   return 0;
}