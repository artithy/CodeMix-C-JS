// Online C compiler to run C program online
#include <stdio.h>

int main() {
      int num1,num2,option;
       printf("Enter the value of num1: ");
      scanf("%d",&num1);
      printf("Enter the value of num2: ");
      scanf("%d",&num2);
      
      printf("Enter your option\n");
      printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n");
     scanf("%d",&option);
      
      switch(option){
          case 1:
          printf("The Addition of %d and %d is: %d\n",num1,num2,num1+num2);
          break;
          
          case 2:
          printf("The Substraction of %d and %d is: %d\n",num1,num2,num1-num2);
          break;
          
          case 3:
          printf("The multiplication of %d and %d is: %d\n",num1,num2,num1*num2);
          break;
          
          case 4:
          if(num2==0){
              printf("The second integer is zero.Devide by zero.");
          }
          else{
              printf("The division of %d and %d is: %d\n",num1,num2,num1/num2);
          }
          break;
          
          case 5:
          break;
          
          default:
          printf("Invalid output");
          break;
      }
      
      
    return 0;
}