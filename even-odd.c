// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a;
   int b;
   printf("enter a number a ");
   scanf("%d", &a);
    b=a%2;
    
    if(b==0){
        printf("this is a even number");
    }else{
        printf("this is a odd number");
    }
    return 0;
}