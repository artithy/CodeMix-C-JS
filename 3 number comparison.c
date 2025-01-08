// Online C compiler to run C program online
#include <stdio.h>

int main() {
       int a;
       int b;
       int c;
       
       printf("Enter a number a ");
       scanf("%d", &a);
       
       printf("Enter a number b ");
       scanf("%d", &b);
       
       printf("Enter a number c ");
       scanf("%d", &c);
       
       if(a>b && a>c){
           printf("a is the leargest number");
       }else if(b>c){
           printf("b is the leargest number");
       }else{
           printf("c is the leargest number");
       }
   
        return 0;
} 