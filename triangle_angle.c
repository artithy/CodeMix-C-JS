#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
 printf("Enter the three value: ");
 scanf("%d %d %d", &angle1, &angle2, &angle3);
 int sum;
 sum = angle1+angle2+angle3;
 if(sum == 180){
     printf("This is a valid Triangle");
     
 }else{
     printf("This is a invalid Triangle");
 }
 
 
 return 0;
}