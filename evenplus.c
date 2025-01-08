// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,n,sum,p;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("The even numbers are: ");
    for(i=1; i<=n; i++){
        p=2*i;
        printf("%d",2*i);
        sum+=p;
    }
    
    printf("\nThe Sum of even Natural Number upto %d terms: %d\n",n,sum);
    return 0;
}