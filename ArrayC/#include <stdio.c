#include <stdio.h>
int multi(int a, int b) {
    return a * b;
}
int main(){
     int i,j,result;
     
     printf("Enter the number i: ");
     scanf("%d", &i);
     
     printf("Enter the number j: ");
     scanf("%d", &j);
     
     result = multi(i,j);
     
     printf("The multiplication is: %d",result);
    
    return 0;


}