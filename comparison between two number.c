#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the first number a ");
    scanf("%d", &a);
    
    printf("Enter the second number b ");
    scanf("%d", &b);
    
    if(a>b)
     {
       printf("a is greater than b");
    }else if(a==b){
     printf("b is equal to a");
    }else{
        printf("b is greater than a");
    }
    return 0;
}