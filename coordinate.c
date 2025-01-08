
// Online C compiler to run C program online
#include <stdio.h>

int main() {
       int x;
       int y;
       printf("Enter a value x ");
       scanf("%d", &x);
       
       printf("Enter a value y ");
       scanf("%d", &y);
       
       if(x>0 && y>0){
           printf("this is a first coordinate");
        }else if( x<0 && y>0){
            printf("this is a second coordinate");
        }else if(x<0 && y<0){
            printf("this is a third coordinate");
        }else{
            printf("this is a fourth coordinate");
        }
   
        return 0;
}