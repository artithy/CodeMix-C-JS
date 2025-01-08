// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    int b;
    printf("enter a year ");
    scanf("%d", &a);
    b=a%4;
    
    
    if(b==0){
        printf("this is a leap-year");
    }else{
        printf("this is not a leap-year");
    }
   
        return 0;
}