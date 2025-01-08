#include <stdio.h>

#include <math.h>
int main(){

    int num;


    printf("Enetr a number: ");
    scanf("%d", &num);


    int fd = num/1000;

    int ld = num%10;


 int sum = fd +ld;
 printf("The sum of first and last digit is: %d", sum);



    return 0;
}